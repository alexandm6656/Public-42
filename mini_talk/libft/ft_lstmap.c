/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:30:05 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/01 16:27:50 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tempo;
	t_list	*nl;

	tempo = 0;
	if (!f || !del || !lst)
		return (NULL);
	nl = ft_lstnew(f(lst->content));
	if (!nl)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		tempo = ft_lstnew(f(lst->content));
		if (!tempo)
		{
			ft_lstclear(&nl, del);
			return (NULL);
		}
		ft_lstadd_back(&nl, tempo);
		lst = lst->next;
	}
	return (nl);
}
