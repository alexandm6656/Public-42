/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_server.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:44:18 by alexandm          #+#    #+#             */
/*   Updated: 2023/04/07 14:28:44 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

// reinitialise le pid, n et c ainsi que free res 
int	ft_error2(char **res, int *pid, int *n, char *c)
{
	ft_pid(pid, res, n, c);
	return (2);
}

// return : 0 (send confirmation bit and keep global at 1 
//				because waiting for signal of the same pid) 
// return : -2 (send confirmation bit but keep global at 0 
//				because message is entirely received)
// return : 1 (wrong pid of an other client,
//	send SIGUSER2 to notify the error to the client, doesn t change the global)
// return : 2 (client didn t response, so reset of argument of ft_letter)
int	ft_letter(int bit, int flag, int id)
{
	static int		n = 7;
	static char		c = 0;
	static char		*res = NULL;
	static pid_t	pid = 0;

	if (flag == 1)
		return (ft_error2(&res, &pid, &n, &c));
	if (pid == 0)
		pid = id;
	if (pid != id)
		return (1);
	c += bit << n--;
	if (n == -1)
	{
		if (c == '\0')
			return (ft_return_zero(&res, &n, &c, &pid));
		else
		{
			res = ft_strjoinc(res, c);
			if (!res)
				exit (1);
			ft_reset(&n, &c);
		}
	}
	return (0);
}

char	*ft_strjoinc(char *s1, char c)
{
	int		lens1;
	int		i;
	char	*ns;

	if (!s1)
		lens1 = 0;
	else
		lens1 = ft_strlen(s1);
	ns = malloc(sizeof(char) * (lens1 + 1 + 1));
	if (!ns)
	{
		if (s1)
			free (s1);
		return (NULL);
	}
	i = -1;
	while (++i < lens1)
		ns[i] = s1[i];
	ns[i] = c;
	i++;
	ns[i] = '\0';
	free(s1);
	return (ns);
}
