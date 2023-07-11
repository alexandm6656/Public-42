/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_talk.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandm <alexandm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:30:35 by alexandm          #+#    #+#             */
/*   Updated: 2023/04/07 14:25:24 by alexandm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_TALK_H
# define MINI_TALK_H

# include "./libft/libft.h"
# include <signal.h>
# include <sys/types.h>

void	ft_error(int error);
int		ft_error2(char **res, int *pid, int *n, char *c);
int		ft_return_zero(char **res, int *n, char *c, int *pid);
int		ft_letter(int bit, int flag, int id);
void	ft_error3(int error);
void	ft_reset(int *n, char *c);
char	*ft_strjoinc(char *s1, char c);
void	ft_pid(int *pid, char **res, int *n, char *c);
void	ft_client_error(void);

#endif