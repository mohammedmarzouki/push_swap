/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:05:48 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/28 15:22:56 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swapit.h"

void    chk_repeated(t_stack *stack)
{
	int i;
	int j;
	long carry;
	
	i = stack->a_head;
	while(i < stack->a_tail)
	{
		carry = stack->a[i];
		j = i + 1;
		while(j < stack->a_tail)
		{
			if (carry == stack->a[j])
				get_out(stack);
			j++;
		}
		i++;
	}
}

void    center_a_up(t_stack *stack)
{
	int	i;

	i = -1;
	while(++i < stack->size)
	{
		if(stack->a[i] == MT)
			continue;
		stack->a[i - stack->margin] = stack->a[i];
		stack->a[i] = MT;
	}
	stack->a_head = stack->margin + 2;
	stack->a_tail -= stack->margin;
}
void    center_a_down(t_stack *stack)
{
	int	i;

	i = stack->size;
	while(--i > 0)
	{
		if(stack->a[i] == MT)
			continue;
		stack->a[i + stack->margin] = stack->a[i];
		stack->a[i] = MT;
	}
	stack->a_head = stack->margin + 2;
	stack->a_tail += stack->a_len;
}

void    center_b_up(t_stack *stack)
{
	int	i;

	i = -1;
	while(++i < stack->size)
	{
		if(stack->b[i] == MT)
			continue;
		stack->b[i - stack->margin] = stack->b[i];
		stack->b[i] = MT;
	}
	stack->b_head = stack->margin + 2;
	stack->b_tail -= stack->margin;
}

void    center_b_down(t_stack *stack)
{
	int	i;

	i = stack->size + 1;
	while(--i >= 0)
	{
		if(stack->b[i] == MT)
			continue;
		stack->b[i + stack->margin] = stack->b[i];
		stack->b[i] = MT;
	}
	stack->b_head = stack->margin + 2;
	stack->b_tail += stack->b_len;
}