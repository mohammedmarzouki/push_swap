/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 22:08:38 by mmarzouk          #+#    #+#             */
/*   Updated: 2021/05/20 23:34:45 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAPIT_H
# define SWAPIT_H

#include "../commun/libft.h"

typedef struct  s_stack
{
	long long         *a;
	long long         *b;
	int         margin;
}               t_stack;

#endif