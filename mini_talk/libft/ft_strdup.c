/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:35:53 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/21 18:55:49 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ns;
	size_t	n;
	size_t	i;

	n = ft_strlen(s) + 1;
	ns = (char *) malloc(sizeof(char) * (n));
	if (!ns)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ns[i] = s[i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	printf("%s\n", strdup("r"));
// 	return (0);
// }