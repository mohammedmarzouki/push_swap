/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:57:06 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/28 12:14:46 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swapit.h"

void	rotate_a(t_stack *stack)
{
	if(stack->a_len < 3)
		return (swap_a(stack));
	if(stack->a_tail + 2 > stack->size)
		center_a_up(stack);
	stack->a[stack->a_tail + 1] = stack->a[stack->a_head];
	stack->a_tail++;
	stack->a[stack->a_head] = MT;
	stack->a_head++;
}

void	rotate_b(t_stack *stack)
{
	if(stack->b_len < 3)
		return (swap_b(stack));
	if(stack->b_tail + 2 > stack->size)
		center_b_up(stack);
	stack->b[stack->b_tail + 1] = stack->b[stack->b_head];
	stack->b_tail++;
	stack->b[stack->b_head] = MT;
	stack->b_head++;
}

void	rev_rotate_a(t_stack *stack)
{
	if(stack->a_len < 3)
		return (swap_a(stack));
	if(stack->a_head - 2 < 1)
		center_a_down(stack);
	stack->a[stack->a_head - 1] = stack->a[stack->a_tail];
	stack->a[stack->a_tail] = MT;
	stack->a_tail--;
	stack->a_head--;
}

void	rev_rotate_b(t_stack *stack)
{
	if(stack->b_len < 3)
		return (swap_a(stack));
	if(stack->b_head - 2 < 1)
		center_a_down(stack);
	stack->b[stack->b_head - 1] = stack->b[stack->b_tail];
	stack->b[stack->b_tail] = MT;
	stack->b_tail--;
	stack->b_head--;
}