/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 22:16:22 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/26 13:07:31 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swapit.h"


int main(int count,char **input)
{
    t_stack	*stack;
    int i = 0;
    
    
    printf("%d\n", count);
    if (count == 1)
        get_out((void *)0);
    stack = basic_chk(count, ++input);
    i = 0;
    while (i < stack->len_a)
    {
        printf("%ld\n", stack->a[i]);
        i++;
    }
}