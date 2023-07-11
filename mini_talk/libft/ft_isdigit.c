/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:45:04 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/18 15:59:51 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char** argv)
// {
// 		printf("%d \n", ft_isdigit(argv[1][0]));
// 	return (0);
// }