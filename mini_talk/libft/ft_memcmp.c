/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:09:40 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 14:09:11 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

// #include <string.h>

// int	main(void)
// {
// 	char str[] = {50, -30, 15, 150};
// 	char str2[] = {38, -30, 124, 150};

// 	if (1)
// 	{
// 		printf("test 1\n");
// 		printf("ma fonction : %d\n", ft_memcmp(str, str2, 3));
// 		printf("vrai fonction : %d\n", memcmp(str, str2, 3));
// 	}
// 	return (0);
// }