/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics_checks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:49:16 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/26 13:05:21 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "swapit.h"

t_stack			*basic_chk(int c, char **nbs)
{
	int 	i;
	t_stack	*stack;

	i = -1;
	stack = (t_stack *)malloc(sizeof(t_stack));
	stack->margin = c / 2;
	stack->len_a = c * 2;
	stack->a = (long *)malloc(sizeof(long) * stack->len_a);
	stack->b = (long *)malloc(sizeof(long) * stack->len_a);
	while (++i < stack->margin)
		stack->a[i] = MT;
	stack->a_head = i;
	while (*nbs)
	{
		stack->a[i] = chk_nb(*nbs, stack);
		i++;
		nbs++;
	}
	stack->a_tail = i;
	while (i < stack->len_a)
		stack->a[i++] = MT;
	chk_repeated(stack);
	return (stack);
}

