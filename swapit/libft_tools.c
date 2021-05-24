/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:01:11 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/24 16:02:39 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swapit.h"

long    ft_strlen(const char *str)
{
	long i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

void	ft_putstr(char *s)
{
	while (s && *s)
	{
		write(1, &*s, 1);
		s++;
	}
}

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}
