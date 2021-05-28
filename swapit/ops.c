/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:21:35 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/28 12:31:44 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swapit.h"

void    push_a(t_stack *stack)
{
	if (stack->b[stack->b_head] == MT)
	   return;
	if (stack->a_head - 2 < 1)
		center_a_down(stack);
	stack->a_head--;
	stack->a[stack->a_head] = stack->b[stack->b_head];
	stack->b[stack->b_head] = MT;
	stack->b_head++;
	stack->a_len++;
	stack->b_len--;
	
}

void    push_b(t_stack *stack)
{
	if (stack->a[stack->a_head] == MT)
	   return;
	if (stack->b_head - 2 < 1)
		center_b_down(stack);
	stack->b_head--;
	stack->b[stack->b_head] = stack->a[stack->a_head];
	stack->a[stack->a_head] = MT;
	stack->a_head++;
	stack->b_len++;
	stack->a_len--;
}

void    swap_b(t_stack *stack)
{
	long    hold;
	if (stack->b_len < 2)
	   return;
	hold = stack->b[stack->b_head];
	stack->b[stack->b_head] = stack->b[stack->b_head + 1];
	stack->b[stack->b_head + 1] = hold;
}

void    swap_a(t_stack *stack)
{
	long    hold;
	if (stack->a_len < 2)
	   return;
	hold = stack->a[stack->a_head];
	stack->a[stack->a_head] = stack->a[stack->a_head + 1];
	stack->a[stack->a_head + 1] = hold;
}

void    swap_ab(t_stack *stack)
{
	swap_a(stack);
	swap_b(stack);
}