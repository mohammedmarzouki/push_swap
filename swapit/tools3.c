/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 12:21:17 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/28 14:08:16 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swapit.h"

void    init_b(t_stack *stack)
{
    int i;

    i = 0;
    stack->b_head = stack->a_len + stack->margin;
    stack->b_tail = stack->a_len + stack->margin;
    stack->b_len = 0;
    while(i < stack->size)
    {
        stack->b[i] = MT;
        i++;
    }
}