/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:20:14 by alexandm          #+#    #+#             */
/*   Updated: 2023/04/05 21:45:22 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

void	ft_reset(int *n, char *c)
{
	*n = 7;
	*c = 0;
}

// simple exit si error == 0
void	ft_error(int error)
{
	if (error != 0)
		exit(1);
}

// 
