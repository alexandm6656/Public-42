/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:32:35 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 15:05:13 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < size)
		i++;
	if (i == size)
		return (size + ft_strlen(src));
	j = 0;
	while (size && src[j] && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (ft_strlen(src) + i);
}
// #include <stdlib.h>
// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	size_t	i;

// 	i = 0;
// 	char	dest[] = "";
// 	char	dest1[] = "";
// 	while (i < 10)
// 	{
// 		printf("%ld\n", i);
// 		printf("fonction ft_strlcat : %ld et string print 
// :%s\n", ft_strlcat(dest, "", i), dest);
// 		printf("fonction strlcat : %ld et string 
// print :%s\n\n", strlcat(dest1, "", i), dest1);
// 		i++;
// 	}
// 	return (0);
// }

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	dstlen;
// 	size_t	srclen;

// 	j = 0;
// 	dstlen = ft_strlen(dst);
// 	srclen = ft_strlen(src);
// 	i = dstlen;
// 	if (size == 0)
// 		return (srclen);
// 	while (i < size - 1 && src[j] != '\0')
// 	{
// 		dst[i] = src[j];
// 		j++;
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	if (size < dstlen || size < 0)
// 	{
// 		return (srclen + size);
// 	}
// 	return (dstlen + ft_strlen(src));
// }
