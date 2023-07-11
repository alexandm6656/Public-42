/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:05:58 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/28 18:39:07 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*usrc;
	unsigned char	*udest;

	usrc = (unsigned char *)src;
	udest = (unsigned char *)dest;
	if (udest > usrc)
	{
		while (n--)
			*(udest + n) = *(usrc + n);
		return (dest);
	}
	while (n--)
		*(udest++) = *(usrc++);
	return (dest);
}

// #include <string.h>

// int	main(void)
// {
// 	// char str[50] = "bnjour";
// 	// char p2[] = "on";
// 	char str[] = {67, 68, 67, 68, 69, 0, 45};
// 	char p2[] = {67, 67, 68, 68, 69, 0, 45};

// 	ft_memmove(str + 1, str + 2 , 2);
// 	printf("%s\n", str);
// 	return 0;
// }