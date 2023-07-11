/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:17:56 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 14:15:00 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char )c)
			return ((char *)(s + i));
		i++;
	}
	if (c == 0)
		return ((char *)(s + i));
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	if (0)
// 	{
// 		printf(" Ma fonction : \t\t%p \n", ft_strchr("trouver", 'o' + 256));
// 		printf("Vrai fonction ; \t%p \n", strchr("trouver", 'o' + 256));
// 	}

// 	if (1)
// 	{
// 		printf(" Ma fonction : \t\t%p \n", ft_strchr("trouver", 0));
// 		printf("Vrai fonction ; \t%p \n", strchr("trouver", 0));
// 	}
// 	return (0);
// }
