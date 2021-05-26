/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:05:48 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/26 13:15:22 by mmarzouk         ###   ########.fr       */
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