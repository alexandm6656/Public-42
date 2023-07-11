/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:30:35 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 14:08:45 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*s1;

	s1 = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] == (unsigned char)c)
			return (s1 + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
// 	char	*str;
// 	char	c;
// 	int		n;

// 	n = 10;
// 	str = "/|\x12\xff\x09\x42\2002\42|\\";
// 	c = '\200';
// 	printf("pointeur sur la lettre trouve
// qvec ma fonction %p\n", ft_memchr(str, c, n));
// // 	printf("pointeur sur la lettre trouve 
// avec la vrai fonction %p\n", memchr(str, c, n));
// // }
