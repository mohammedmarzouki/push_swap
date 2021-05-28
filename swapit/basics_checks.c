/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics_checks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:49:16 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/28 15:14:52 by mmarzouk         ###   ########.fr       */
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
	stack->size = c * 2;
	stack->a_len = c;
	stack->b_len = 0;
	stack->a = (long *)malloc(sizeof(long) * stack->size);
	stack->b = (long *)malloc(sizeof(long) * stack->size);
	while (++i < stack->margin)
		stack->a[i] = MT;
	stack->a_head = i;
	while (*nbs)
	{
		stack->a[i] = chk_nb(*nbs, stack);
		i++;
		nbs++;
	}
	stack->a_tail = i - 1;
	while (i < stack->size)
		stack->a[i++] = MT;
	chk_repeated(stack);
	return (stack);
}

