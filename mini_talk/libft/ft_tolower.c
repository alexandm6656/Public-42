/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:44:27 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 14:20:49 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(int argc, char** argv)
// {
// 	printf("test ma fonction : %c \n", ft_tolower(argv[1][0]));
// 	printf("test de la vrai fonction : %c \n", ft_tolower(argv[1][0]));
// 	return 0;
// }
