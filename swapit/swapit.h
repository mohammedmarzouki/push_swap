/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 22:08:38 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/28 12:24:41 by mmarzouk         ###   ########.fr       */
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
	int			a_len;
	int			b_len;
	int			a_head;
	int			b_head;
	int 		a_tail;
	int			b_tail;
	int 		size;
}               t_stack;

/* ASSETS */
t_stack			*basic_chk(int c, char **nbs);
/* OPS */
void	push_a(t_stack *stack);
void    push_b(t_stack *stack);
void    swap_b(t_stack *stack);
void    swap_a(t_stack *stack);
void    swap_ab(t_stack *stack);
void	rotate_a(t_stack *stack);
void	rotate_b(t_stack *stack);
void	rotate_ab(t_stack *stack);
void	rev_rotate_a(t_stack *stack);
void	rev_rotate_b(t_stack *stack);
void	rev_rotate_ab(t_stack *stack);

/* TOOLS */
void	ft_putstr(char *s);
void    get_out(t_stack *stack);
int		ft_isdigit(int a);
long	ft_strlen(const char *str);
int		same(char *s1, char *s2);
long	ft_atoi(const char *str);
long    chk_nb(char *s,t_stack *stack);
void    chk_repeated(t_stack *stack);
void    init_b(t_stack *stack);
void    free_stack(t_stack *stack);
void    m_free(void *s);
void    center_a_up(t_stack *stack);
void    center_b_up(t_stack *stack);
void    center_a_down(t_stack *stack);
void    center_b_down(t_stack *stack);

/* LIBFT / MODIFIED */
long	ft_atoi(const char *str);
int		ft_isdigit(int a);
void	ft_putstr(char *s);
long    ft_strlen(const char *str);

#endif