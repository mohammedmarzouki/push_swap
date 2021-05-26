/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 22:08:38 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/26 13:15:56 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAPIT_H
# define SWAPIT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


#define MT 9223372036854775807

typedef struct  s_stack
{
	long        *a;
	long        *b;
	int         margin;
	int			len_a;
	int			len_b;
	int			a_head;
	int			b_head;
	int 		a_tail;
	int			b_tail;
}               t_stack;

/* ASSETS */
t_stack			*basic_chk(int c, char **nbs);


/* TOOLS */
void	ft_putstr(char *s);
void    get_out(t_stack *stack);
int		ft_isdigit(int a);
long	ft_strlen(const char *str);
int		same(char *s1, char *s2);
long	ft_atoi(const char *str);
long    chk_nb(char *s,t_stack *stack);
void    chk_repeated(t_stack *stack);
void    free_stack(t_stack *stack);
void    m_free(void *s);

/* LIBFT / MODIFIED */
long	ft_atoi(const char *str);
int		ft_isdigit(int a);
void	ft_putstr(char *s);
long    ft_strlen(const char *str);

#endif