/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:46:25 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/18 16:00:04 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char** argv)
// {
// 		printf("%d \n", ft_isprint(argv[1][0]));
// 	return (0);
// }