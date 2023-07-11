/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:30:45 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/29 15:05:57 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_verifc(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static int	ft_begin(char *s1, char *set)
{
	int	cptbegin;
	int	i;

	i = 0;
	cptbegin = 0;
	while (ft_verifc(s1[i], set) == 1)
	{
		cptbegin++;
		i++;
	}
	return (cptbegin);
}

static int	ft_end(char *s1, char *set)
{
	int	i;
	int	cptend;

	i = ft_strlen(s1) - 1;
	cptend = 0;
	while (ft_verifc(s1[i], set) == 1)
	{
		cptend++;
		i--;
	}
	return (cptend);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		lenstr;
	char	*ns;
	int		cptbegin;
	int		cptend;

	if (!s1)
		return (NULL);
	lenstr = ft_strlen((char *)s1) - 1;
	cptbegin = ft_begin((char *)s1, (char *)set);
	cptend = ft_end((char *)s1, (char *)set);
	if (cptbegin == lenstr + 1)
		cptend = 0;
	ns = malloc(sizeof(char) * (lenstr - cptbegin - cptend + 2));
	if (!ns)
		return (NULL);
	i = 0;
	while (i <= (lenstr - cptbegin - cptend))
	{
		ns[i] = s1[i + cptbegin];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}

// #include <stdio.h>
// int	main	()
// {
// 	printf("%s\n", ft_strtrim("bccccalexcccbbb", "bc"));
// 	return (0);
// }
