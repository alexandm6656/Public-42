/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:11:05 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 14:17:34 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(int argc, char** argv)
// {
// 	printf("test ma fonction : %c \n", ft_toupper(argv[1][0]));
// 	printf("test de la vrai fonction : %c \n", toupper(argv[1][0]));
// 	return 0;
// }