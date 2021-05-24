/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 22:08:38 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/24 17:00:27 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAPIT_H
# define SWAPIT_H

typedef struct  s_stack
{
	long        *a;
	long        *b;
	int         margin;
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
void    chk_nb(char *s,t_stack *stack);

/* LIBFT / MODIFIED */
long	ft_atoi(const char *str);
int		ft_isdigit(int a);
void	ft_putstr(char *s);
long    ft_strlen(const char *str);

#endif