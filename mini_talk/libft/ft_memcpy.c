/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:55 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 16:05:39 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)dest + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {

//     int array [] = { 54, 85, 20, 63, 21 };
//     int * copy = NULL;
//     int length = sizeof( int ) * 5;
//     /* Memory allocation and copy */
//     copy = (int *) malloc( length );
//     ft_memcpy( copy, array, length );
//     /* Display the copied values */
//     for( length=0; length<5; length++ ) {
//         printf( "%d ", copy[ length ] );
//     }
//     printf( "\n" );
//     free( copy );
//     return EXIT_SUCCESS;
// }
// int main()
// {
// 	char	*dest;
// 	char	*src;
// 	int		i;
// 	void	*p;
// 	void	*p2;
// 	i = 2;
// 	dest = "dest";
// 	src = "src";
// 	// ft_memcpy(dest, src, i);
// 	// printf("ma fonction : %s \n", dest);
// 	memcpy(dest, src, i);
// 	printf("la fonction string.h : %s \n", dest);
// 	return (0);
// }