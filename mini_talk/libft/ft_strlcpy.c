/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:26:42 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 14:11:06 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//juste verifier si pour 0 on met le \0
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdlib.h>
// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	size_t i;

// 	i = -1;
// 	char dst[5];
// 	dst[0];
// 	printf("fonction ft_strlcpy : %ld et
// string print :%s\n", ft_strlcpy(dst, "rate", i), dst); 
// 	printf("fonction strlcpy
// : %ld et string print :%s", strlcpy(dst, "rate", i), dst);
// 	return (0);
// }
