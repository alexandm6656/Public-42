/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:06:11 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/07 21:57:51 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb != 0 && size != 0)
	{
		if ((nmemb * size) / size != nmemb)
			return (NULL);
	}
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, size * nmemb);
	return (p);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// 	size_t	i;
// 	size_t	n = 1;

// 	// i = 4294967295;
// 	i = ((size_t) -1) /2;
// 	char *str1 = (char *) calloc (i, n);
// 	printf("%p\n", str1);
// 	char *str = (char *) ft_calloc (i , n);
// 	printf("%p\n", str);
// 	return 0;
// }