/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:08:38 by alexandm          #+#    #+#             */
/*   Updated: 2023/04/07 14:25:12 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

int	g_i;

void	handle_sigusr(int sig)
{
	if (sig == SIGUSR1)
	{
		if (g_i == 2)
		{
			write(1, "Message entier recu\n", 21);
			exit(0);
		}
		g_i = 1;
	}
	if (sig == SIGUSR2)
	{
		write(1, "server is working with another client\n", 39);
		exit(0);
	}
}

void	ft_message(char *str, pid_t pid)
{
	static int	i = 0;
	static int	power = 7;
	int			error;

	if (power == -1 && str[i] != '\0')
	{
		power = 7;
		i++;
	}
	if ((1 & (str[i] >> power)) == 1)
		error = kill(pid, SIGUSR2);
	else
	{
		error = kill(pid, SIGUSR1);
		if (str[i] == '\0' && power == 0)
			g_i = 2;
	}
	if (error == -1)
		exit(1);
	power--;
}

int	ft_check(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 3)
	{
		write(1, "error argc\npid then message\n", 28);
		exit(1);
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
			i++;
		else
			exit(1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;
	struct sigaction	sb;
	int					error;
	int					cpt;

	ft_check(argc, argv);
	sa.sa_handler = &handle_sigusr;
	sb.sa_handler = &handle_sigusr;
	error = sigaction(SIGUSR1, &sa, NULL);
	ft_error(error);
	error = sigaction(SIGUSR2, &sb, NULL);
	ft_error(error);
	while (1)
	{
		if (g_i != 2)
			g_i = 0;
		ft_message(argv[2], ft_atoi(argv[1]));
		cpt = -2147483648;
		while ((g_i == 0 || g_i == 2) && cpt < 2147483647)
			cpt++;
		if (cpt == 2147483647)
			return (ft_printf("Server Error\n"), 1);
	}
	return (0);
}
