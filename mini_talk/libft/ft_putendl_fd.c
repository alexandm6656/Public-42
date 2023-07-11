/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:55:10 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/29 15:13:48 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

// #include <unistd.h>
// #include <fcntl.h>
// int	main(void)
// {
// 	int	fd;

// 	fd = open("test.txt", O_WRONLY | O_APPEND);
// 	ft_putendl_fd("salut", fd);
// 	return (0);
// }