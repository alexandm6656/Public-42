/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:58:47 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/30 13:03:39 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	littlelen;

	if (!big && !little)
		return (NULL);
	i = 0;
	littlelen = ft_strlen(little);
	if (big[0] == '\0' && little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i + littlelen <= len)
	{
		if (ft_strncmp(big + i, little, littlelen) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	int		i;
// 	void	*little;

// 	little = "";
// 	i = 0;
// 	printf("test 0\n");
// 	while (i < 12)
// 	{
// 		printf("%u\n", i);
// 		printf("ma fonction strnstr : %s \n", ft_strnstr(NULL, "", i));
// 		printf("vrai fonction strnstr : %s \n\n", strnstr(NULL, "", i));
// 		i++;
// 	}
// 	return (0);
// }
