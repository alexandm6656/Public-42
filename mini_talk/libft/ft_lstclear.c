/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:20:43 by alexandm          #+#    #+#             */
/*   Updated: 2022/12/02 16:31:39 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tempo;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tempo = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tempo;
	}
}
