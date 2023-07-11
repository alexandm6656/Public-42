/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:00:56 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/28 17:05:32 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <stdlib.h>

// int		ft_countwords(char *s, char c);
// int		ft_beginstr(char *s, char c, int j);
// char	*ft_cut(char *s, char c, int place);
// char	**ft_split(char const *s, char c);

// int	main(void)
// {
// 	char	**res;
// 	char	*str;
// 	char	sep;
// 	int		i;

// 	i = 0;
// 	sep = ' ';
// 	str = "  tripouille  42  ";
// 	res = ft_split(str, sep);
// 	if (res)
// 	{
// 		printf("%s\n %s\n", res[0], res[1]);
// 		while (res[i])
// 		{
// 			free(res[i]);
// 			i++;
// 		}
// 		free(res);
// 	}
// 	return (0);
// }

int	ft_countwords(char *s, char c)
{
	int	i;
	int	word;

	word = 0;
	i = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i] == c)
		i++;
	if (s[i] != '\0')
		word++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			word++;
		i++;
	}
	return (word);
}

int	ft_beginstr(char *s, char c, int j)
{
	int	i;

	i = 0;
	if (j == 0)
	{
		while (s[i] == c)
			i++;
		return (i);
	}
	while (s[i] == c)
		i++;
	while (j != 0)
	{
		if (s[i] == c && s[i + 1] != c)
			j--;
		i++;
	}
	return (i);
}

char	*ft_cut(char *s, char c, int beginning)
{
	int		i;
	int		j;
	int		cpt;
	char	*ns;

	cpt = 0;
	i = beginning;
	while (s[i] && s[i] != c)
	{
		cpt++;
		i++;
	}
	ns = malloc(sizeof(char) * (cpt + 1));
	if (!ns)
		return (NULL);
	i = beginning;
	j = 0;
	while (s[i] && s[i] != c)
	{
		ns[j] = s[i];
		i++;
		j++;
	}
	ns[j] = '\0';
	return (ns);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		wordscount;
	char	**res;

	if (!s)
		return (NULL);
	wordscount = ft_countwords((char *) s, c);
	j = 0;
	res = malloc(sizeof(char *) * (1 + wordscount));
	if (!res)
		return (NULL);
	while (j < wordscount)
	{
		res[j] = ft_cut((char *) s, c, ft_beginstr((char *) s, c, j));
		if (res[j] == NULL)
		{
			while (--j > -1)
				free(res[j]);
			free(res);
			return (NULL);
		}
		j++;
	}
	res[j] = NULL;
	return (res);
}
