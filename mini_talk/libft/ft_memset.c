/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:41:50 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 16:04:26 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*((unsigned char *) s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	main(void)
// {
// 	int i = 18;
// 	void	*p;
// 	char s1[0xF00];
// 	char s[0xF99];
// 	// // char	s[] = "salut";
// 	// // char	s1[] = "salut";

// 	// memset(p, 'A', i);
// 	ft_memset(p, 'A', i);
// 	printf("vrai fonction \t %s\n", s);
// 	printf("ma fonction \t %s\n", s1);
// 	printf("pointeur return %p", ft_memset(p, 'A', i));
// }

// int main()
// {
//     int		array [] = { 54, 85, 20, 63, 21 };
// 	size_t	size = sizeof(int) * 5;
// 	int		length;
//     /* Display the initial values */
//     for( length=0; length<5; length++) {
//         printf( "%d ", array[ length ] );
//     }
//     printf( "\n" );
//     /* Reset the memory bloc */
//     ft_memset(array, 0, size);
//     /* Display the new values */
// 	for(length=0; length<5; length++) {
// 		printf("%d ", array[length]);
// 	}
// 	printf("\n");
// 	return (0);
// }