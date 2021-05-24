/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:44:46 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/24 16:04:05 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swapit.h"

void    get_out(void)
{
    ft_putstr("Error\n");
    exit(0);
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