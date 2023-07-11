/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:18:01 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/18 16:03:30 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <unistd.h>
// #include <fcntl.h>
// int	main()
// {
// 	int fd;

// 	fd = open("test.txt", O_WRONLY | O_APPEND);
// 	ft_putchar_fd('s', fd);
// 	return 0;
// }