/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:37:59 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 14:15:44 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	char unsigned	*str1;
	char unsigned	*str2;

	str1 = (char unsigned *)s1;
	str2 = (char unsigned *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int	main()
// {
// 	int		i;
// 	char	*s1;
// 	char	*s2;

// 	s1 = "feef";
// 	s2 = "fe";
// 	i = -2;
// 	while (i++ < 10)
// 	{
// 		printf("%d\n", i);
// 		printf("resultat de ma fonction
// : %d\n", ft_strncmp(s1, s2, i));
// 		printf("resultat de la vrai 
// fonction : %d\n\n", strncmp(s1, s2 ,i));
// 	}
// 	return (0);
// }
