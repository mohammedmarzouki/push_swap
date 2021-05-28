/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:57:19 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/28 11:58:49 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swapit.h"

void	rev_rotate_ab(t_stack *stack)
{
    rev_rotate_a(stack);
    rev_rotate_b(stack);
}

void	rotate_ab(t_stack *stack)
{
    rotate_a(stack);
    rotate_b(stack);
}