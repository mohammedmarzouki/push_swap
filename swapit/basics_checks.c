/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics_checks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:49:16 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/24 16:07:21 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "swapit.h"

t_stack			*basic_chk(int c, char **nbs)
{
	int 	i;
	int		j;
	int		len;
	t_stack	*stack;

	i = -1;
	// stack = malloc(sizeof(t_stack));
	stack->margin = c / 2;
	stack->a = malloc(sizeof(long) * c * 2);
	while (++i < stack->margin)
		stack->a[i] = __LONG_MAX__;

	while (*nbs)
	{
		len = ft_strlen(*nbs);
		if(len > 0 && len < 12)
		j = -1;
		while (*nbs[++j])
		{
			if (!ft_isdigit(*nbs[j]))
			{
				ft_putstr_fd("only numbers are allowed !!", 1);
				free(stack->a);
				return (NULL);
			}
		}
	}
	
}