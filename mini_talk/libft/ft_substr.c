/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:04:54 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/29 15:01:44 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbralloc(char const *s, unsigned int start, size_t len)
{
	size_t			lens;
	unsigned int	i;

	i = 0;
	lens = ft_strlen(s);
	if (start >= lens)
		return (1);
	while (s[i + start] && i < len)
		i++;
	i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	char				*ns;

	i = 0;
	if (!s)
		return (NULL);
	ns = malloc (sizeof(char) * ft_nbralloc(s, start, len));
	if (!ns)
		return (NULL);
	if (start <= ft_strlen(s))
	{
		while (s[i + start] && i < len)
		{
			ns[i] = s[i + start];
			i++;
		}
	}
	ns[i] = '\0';
	return (ns);
}

// #include <stdio.h>
// int	main()
// {
// 	char	*str;

// 	str = ft_substr("tripouille", 100, 1);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }
