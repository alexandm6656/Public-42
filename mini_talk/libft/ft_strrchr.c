/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:17:17 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 14:12:44 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i > -1)
	{
		if (s[i] == (char )c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	if (1)
// 	{
// 		printf("test 1\n");
// 		printf(" Ma fonction : \t\t%p \n", ft_strrchr("meme", 'm'));
// 		printf("Vrai fonction ; \t%p \n", strrchr("meme", 'm'));
// 	}
// 	if (1)
// 	{
// 		printf("test 2\n");
// 		printf(" Ma fonction : \t\t%p \n", ft_strrchr("meme", 'z'));
// 		printf("Vrai fonction ; \t%p \n", strrchr("meme", 'z'));
// 	}
// 		if (1)
// 	{
// 		printf("test 3\n");
// 		printf(" Ma fonction : \t\t%p \n", ft_strrchr("meme", 0));
// 		printf("Vrai fonction ; \t%p \n", strrchr("meme", 0));
// 	}
// 			if (1)
// 	{
// 		printf("test 4\n");
// 		printf(" Ma fonction : \t\t%p \n", ft_strrchr("ameme", 'a'));
// 		printf("Vrai fonction ; \t%p \n", strrchr("ameme", 'a'));
// 	}
// 				if (1)
// 	{
// 		printf("test 5\n");
// 		printf(" Ma fonction : \t\t%p \n", ft_strrchr("ameme", 'e' + 256));
// 		printf("Vrai fonction ; \t%p \n", strrchr("ameme", 'e' + 256));
// 	}
// 	return 0;
// }