/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics_checks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 22:28:07 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/21 00:02:46 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swapit/swapit.h"
static	int		same(char *s1, char *s2)
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
t_stack			*basic_chk(int c, char **nbs)
{
	int 	i;
	int		j;
	int		len;
	t_stack	*stack;

	i = -1;
	if (c == 0)
	{
		ft_putstr_fd("no args submitted \n",1);
		return (NULL);
	}
	// stack = malloc(sizeof(t_stack));
	stack->margin = c / 2;
	stack->a = malloc(sizeof(long long) * c * 2);
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