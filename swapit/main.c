/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 22:16:22 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/28 15:31:11 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swapit.h"

static  void print_ops(t_stack *stack)
{
    char op[3];
    int i;

    while (op[0] != 'k')
    {
        printf("\n__________________________________________________________\n");
        i = 0;
        while (i < stack->size)
        {
            printf("||%19.ld|%d|%19.ld||\n",stack->a[i],i,stack->b[i]);
            i++;
        }
        printf("\n__________________________________________________________\n");
        printf("margin|%d| size |%d|\nb_head|%d|  b_tail|%d| b_len|%d| \n a_head|%d|  a_tail|%d| a_len|%d|\n"
        ,stack->margin,stack->size,stack->b_head,stack->b_tail,stack->b_len,stack->a_head,stack->a_tail,stack->a_len);
        printf("\n__________________________________________________________\n");
        i = read(0,op,3);
        op[i] = '\0';
        if(op[0] == '1' && op[1] == '\n')
            push_a(stack);
        else if(op[0] == '2')
            push_b(stack);
        else if(op[0] == '3')
            swap_a(stack);
        else if(op[0] == '4')
            swap_b(stack);
        else if(op[0] == '5')
            swap_ab(stack);
        else if(op[0] == '6')
            rotate_a(stack);
        else if(op[0] == '7')
            rotate_b(stack);
        else if(op[0] == '8')
            rotate_ab(stack);
        else if(op[0] == '9')
            rev_rotate_a(stack);
        else if(op[0] == '1' && op[1] == '0')
            rev_rotate_b(stack);
        else if(op[0] == '1' && op[1] == '1')
            rev_rotate_ab(stack);
    }
    
}

int main(int count,char **input)
{
    t_stack	*stack;
    
    if (count == 1)
        get_out((void *)0);
    stack = basic_chk(count, ++input);
    init_b(stack);
    print_ops(stack);
}