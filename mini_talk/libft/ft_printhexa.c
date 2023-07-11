/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:03:35 by alexandm          #+#    #+#             */
/*   Updated: 2023/03/20 15:22:33 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printshexa(unsigned int nbrh)
{
	char		*tabhexa;
	int			j;

	j = 1;
	tabhexa = "0123456789abcdef";
	if (nbrh < 16)
		write(1, &tabhexa[nbrh], 1);
	if (nbrh >= 16)
	{
		j += ft_printshexa(nbrh / 16);
		ft_printshexa(nbrh % 16);
	}
	return (j);
}

int	ft_printbhexa(unsigned int nbrh)
{
	char		*tabhexa;
	int			j;

	j = 1;
	tabhexa = "0123456789ABCDEF";
	if (nbrh < 16)
		write(1, &tabhexa[nbrh], 1);
	if (nbrh >= 16)
	{
		j += ft_printbhexa(nbrh / 16);
		ft_printbhexa(nbrh % 16);
	}
	return (j);
}

static int	ft_printslonghexa(long unsigned int nbrh)
{
	char		*tabhexa;
	int			j;

	j = 1;
	tabhexa = "0123456789abcdef";
	if (nbrh < 16)
		write(1, &tabhexa[nbrh], 1);
	if (nbrh >= 16)
	{
		j += ft_printslonghexa(nbrh / 16);
		ft_printslonghexa(nbrh % 16);
	}
	return (j);
}

int	ft_printpointer(void *ptr)
{
	int		j;

	j = 0;
	if (ptr == NULL)
	{
		j += ft_printf("(nil)");
		return (j);
	}
	j += (ft_printf("0x"));
	j += ft_printslonghexa((long unsigned int)ptr);
	return (j);
}
