/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:44:46 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/26 11:58:59 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swapit.h"

void    get_out(t_stack *stack)
{
	ft_putstr("Error\n");
	if  (stack)
		free_stack(stack);
	exit(0);
}


void    free_stack(t_stack *stack)
{
	m_free(stack->a);
	m_free(stack->b);
	m_free(stack);
}

void    m_free(void *s)
{
	free(s);
	s = (void *)0;
}

int		same(char *s1, char *s2)
{
		if (!s1 && !s2)
				return (1);
		if (!s1 || !s2)
				return (0);
		if (ft_strlen(s1) != ft_strlen(s2))
				return (0);
		while (*s1)
		{
			if (*s1 != *s2)
				return (0);
			s1++;
			s2++;
		}
		return (1);
}

long	chk_nb(char *s, t_stack *stack)
{
	int     i;
	long    num;
	
	i = 0;

	if(s[i] == '-' && s[i + 1])
		i++;
	while(s[i])
	{
		if(!ft_isdigit(s[i]))
			get_out(stack);
		i++;
	}
	i = 0;
	num = ft_atoi(s);
	if (num > 2147483647 || num < -2147483648)
		get_out(stack);
	return(num);
	
}