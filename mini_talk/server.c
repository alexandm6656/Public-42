/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:08:52 by alexandm          #+#    #+#             */
/*   Updated: 2023/04/07 14:22:15 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

int	g_j;

// display client error and reset ft letter for a futur client
void	ft_client_error(void)
{
	ft_printf("Client Error\n");
	ft_letter(0, 1, 0);
	g_j = 0;
}

void	handle_sigusr(int sig, siginfo_t *info, void *ucontext)
{
	int	i;
	int	error;

	ucontext = ucontext + 0;
	if (sig == SIGUSR1)
		i = ft_letter(0, 0, info->si_pid);
	if (sig == SIGUSR2)
		i = ft_letter(1, 0, info->si_pid);
	if (i == 2)
		return ;
	g_j = 0;
	if (i == 1)
		error = kill(info->si_pid, SIGUSR2);
	if (i == 0 || i == -2)
		error = kill(info->si_pid, SIGUSR1);
	if (i == 0)
		g_j = 1;
}

int	ft_return_zero(char **res, int *n, char *c, int *pid)
{
	if (*c == '\0')
	{
		write(1, *res, ft_strlen(*res));
		write(1, "\n", 1);
		free(*res);
		*res = 0;
		*c = 0;
		*n = 7;
		*pid = 0;
	}
	return (-2);
}

pid_t	ft_getpid(void)
{
	pid_t	pid;

	pid = getpid();
	if (pid <= 0)
		exit(1);
	return (pid);
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	sa;
	struct sigaction	sb;
	int					cpt;

	pid = ft_getpid();
	ft_printf("pid server = %d\n", pid);
	ft_error(sigemptyset(&sa.sa_mask));
	ft_error(sigemptyset(&sb.sa_mask));
	sb.sa_flags = SA_SIGINFO;
	sb.sa_sigaction = &handle_sigusr;
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = &handle_sigusr;
	ft_error(sigaction(SIGUSR1, &sa, NULL));
	ft_error(sigaction(SIGUSR2, &sb, NULL));
	g_j = 0;
	while (pid)
	{
		cpt = -2147483648;
		while (g_j == 1 && cpt < 2147483647)
			cpt++;
		if (cpt == 2147483647)
			ft_client_error();
	}
	return (0);
}
