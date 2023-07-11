/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:16:14 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 14:16:30 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	signe;
	int	i;

	result = 0;
	i = 0;
	signe = 1;
	while (nptr[i] == ' ' || (nptr[i] > 8 && nptr[i] < 14))
	i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - 48);
		i++;
	}
	return (result * signe);
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	printf("le nombre est de %d \n", (ft_atoi(argv[1])));
// 	return 0;
// }
