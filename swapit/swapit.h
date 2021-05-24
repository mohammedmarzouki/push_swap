/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 22:08:38 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/24 16:04:14 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAPIT_H
# define SWAPIT_H

#include "../commun/libft.h"

typedef struct  s_stack
{
	long long         *a;
	long long         *b;
	int         margin;
}               t_stack;

/* ASSETS */
t_stack			*basic_chk(int c, char **nbs);




/* TOOLS */
void	ft_putstr(char *s);
void	get_out(void);
int		ft_isdigit(int a);
long	ft_strlen(const char *str);
int		same(char *s1, char *s2);

#endif