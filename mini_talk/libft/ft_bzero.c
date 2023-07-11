/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:01:24 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 14:05:26 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		*((char *)s) = '\0';
		i++;
		s++;
	}
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// 	char str[] = "string";
// 	ft_bzero(str, 6);
// 	printf("%s\n", str);
// 	return 0;
// }