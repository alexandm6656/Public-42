/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:04:18 by alexandm          #+#    #+#             */
/*   Updated: 2023/03/20 15:23:14 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_printnbr(int n)
{
	int	j;

	j = 1;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(1, "-2", 2);
			n = -147483648;
			j++;
		}
		else
			write(1, "-", 1);
		j++;
		n = n * -1;
	}
	if (n > 9)
	{
		j += ft_printnbr(n / 10);
		ft_printnbr(n % 10);
	}
	else
		ft_putchar('0' + n);
	return (j);
}

int	ft_printunsigned(unsigned int n)
{
	int	j;

	j = 1;
	if (n > 9)
	{
		j += ft_printunsigned(n / 10);
		ft_printunsigned(n % 10);
	}
	else
		ft_putchar('0' + n);
	return (j);
}

// int	main(void)
// {
// 	ft_printunsigned(-1);
// 	return (0);
// }
