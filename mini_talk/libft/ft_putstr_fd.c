/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:56:02 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/29 15:12:55 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

// #include <unistd.h>
// #include <fcntl.h>
// int	main(void)
// {
// 	int	fd;

// 	fd = open("test.txt", O_WRONLY | O_APPEND);
// 	ft_putstr_fd("hello\n", fd);
// 	return (0);
// }