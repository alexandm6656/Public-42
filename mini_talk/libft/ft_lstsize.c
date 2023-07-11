/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:23:12 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/30 16:41:25 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// #include <stdio.h>

// void	ft_printlist(t_list *list)
// {
// 	while (list)
// 	{
// 		printf("%s\n", (char *)(list->content));
// 		list = list->next;
// 	}
// }

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	t_list	*list;
// 	t_list	*listnew;

// 	str1 = "sal";
// 	str2 = "ut";
// 	str3 = " les amis";
// 	list = ft_lstnew(str2);
// 	listnew = ft_lstnew(str2);
// 	listnew->content = str1;
// 	ft_lstadd_front(&list, listnew);
// 	// ft_lstadd_back(&list, listnew);
// 	printf("sizeoflist = %d\n", ft_lstsize(list));
// 	ft_printlist(list);
// 	printf("derniere liste : %s/n", (char *)(ft_lstlast(list)->content));
// 	return (0);
// }
