/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:23:28 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/18 16:04:13 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(fd, "-2", 2);
			n = 147483648;
		}
		else
		{
			n = n * -1;
			write(fd, "-", 1);
		}
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n < 10)
	{
		n = n + '0';
		write(fd, &n, 1);
	}
}

// #include <unistd.h>
// #include <fcntl.h>
// int	main(void)
// {
// 	int	fd;

// 	fd = open("test.txt", O_WRONLY | O_APPEND);
// 	ft_putnbr_fd(453, fd);
// 	write(fd, "\n", 1);
// 	return (0);
// }