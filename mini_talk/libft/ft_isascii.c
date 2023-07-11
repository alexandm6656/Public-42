/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:46:03 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/18 15:59:39 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char** argv)
// {
// 		printf("%d \n", ft_isascii(argv[1][0]));
// 	return (0);
// }