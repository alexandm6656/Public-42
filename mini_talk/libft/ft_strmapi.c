/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:25:16 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 14:18:20 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		size;
	unsigned int		i;
	char				*ns;

	i = 0;
	if (!s)
		return (NULL);
	size = ft_strlen(s);
	ns = malloc(sizeof(char) * (size + 1));
	if (!ns)
		return (NULL);
	while (i < size)
	{
		ns[i] = f(i, s[i]);
		i++;
	}
	ns[i] = '\0';
	return (ns);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	printf("%s\n", ft_strmapi("ceci", ft_fonction));
// 	return (0);
// }
