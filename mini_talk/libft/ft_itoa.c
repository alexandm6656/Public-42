/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:46:49 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/28 12:02:15 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_nbrcar(long int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nbr;

	nbr = n;
	str = malloc(sizeof(char) * (ft_nbrcar(nbr) + 1));
	if (!str)
		return (NULL);
	str[ft_nbrcar(nbr)] = '\0';
	i = ft_nbrcar(nbr) - 1;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr / 10 != 0)
	{
		str[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i--;
	}
	if (nbr <= 9)
		str[i] = nbr + 48;
	return (str);
}

// int	main(void)
// {
// 	int		i;
// 	char	*str;

// 	i = -2147483648;
// 	str = ft_itoa(i);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }
