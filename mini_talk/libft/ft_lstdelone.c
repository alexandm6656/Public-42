/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:35:10 by alexandm          #+#    #+#             */
/*   Updated: 2022/11/30 17:37:26 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
// 	t_list	*list;
// 	t_list	*listnew;

// 	str1 = "sal";
// 	str2 = "ut";
// 	list = ft_lstnew(str2);
// 	listnew = ft_lstnew(str1);
// 	ft_lstadd_front(&list, listnew);
// }