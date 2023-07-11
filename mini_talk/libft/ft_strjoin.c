/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:51:21 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 14:18:56 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;
	int		i;
	char	*ns;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	ns = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!ns)
		return (NULL);
	i = 0;
	while (i <= lens1 + lens2)
	{
		while (i < lens1)
		{
			ns[i] = s1[i];
			i++;
		}
		ns[i] = s2[i - lens1];
		i++;
	}
	return (ns);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	void	*s;
// 	void	*s1;
// 	char	*ns = ft_strjoin(s, s1);
// 	printf("%s\n", ns);
// 	free(ns);
// 	return (0);
// }
