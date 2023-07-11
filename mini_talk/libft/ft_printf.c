/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:45:07 by alexandm          #+#    #+#             */
/*   Updated: 2023/03/20 15:22:39 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printchar(int c)
{
	char	cara;

	cara = (char)c;
	return (write(1, &cara, 1));
}

int	ft_printstr(char *str)
{
	int	i;

	if (!str)
	{
		ft_printf("(null)");
		return (6);
	}
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

static int	ft_charincspdiux(char cara)
{
	char	*tab;
	int		i;

	i = 0;
	tab = "cspdiuxX%\0";
	while (tab[i])
	{
		if (tab[i] == cara)
			return (0);
		i++;
	}
	return (1);
}

int	ft_printcase(va_list ap, char *str, int i)
{
	int	j;

	j = 0;
	if (ft_charincspdiux(str[i]) == 1)
		j = write(1, "%", 1) + write(1, &str[i], 1);
	else if (str[i] == '%')
		j = write(1, &str[i], 1);
	else if (str[i] == 'c')
		j = ft_printchar(va_arg(ap, int));
	else if (str[i] == 's')
		j = ft_printstr(va_arg(ap, char *));
	else if (str[i] == 'p')
		j = ft_printpointer(va_arg(ap, void *));
	else if (str[i] == 'd')
		j = ft_printnbr(va_arg(ap, int));
	else if (str[i] == 'i')
		j = ft_printnbr(va_arg(ap, int));
	else if (str[i] == 'u')
		j = ft_printunsigned(va_arg(ap, int));
	else if (str[i] == 'x')
		j = ft_printshexa(va_arg(ap, unsigned int));
	else if (str[i] == 'X')
		j = ft_printbhexa(va_arg(ap, unsigned int));
	return (j);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		lenght;

	lenght = 0;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			lenght += ft_printcase(ap, (char *)str, i + 1);
			i++;
		}
		else if (str[i] != '%')
		{
			write(1, &str[i], 1);
			lenght++;
		}
		i++;
	}
	va_end(ap);
	return (lenght);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int lenght;
// 	char	*str;

// 	// str = , 'p';
// 	// int intmin = -2147483648;

// 	lenght = ft_printf("%cl%", 'p');
// 	printf("%cl%", 'p');
// 	printf("\n%d\n", lenght);
// 	return (0);
// }
