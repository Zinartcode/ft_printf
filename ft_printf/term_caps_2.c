/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   term_caps_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 16:51:36 by azinnatu          #+#    #+#             */
/*   Updated: 2017/09/27 17:39:56 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_termcaps_rightcurs(int nbcol)
{
	ft_printf("\033[%dC", nbcol);
}

void	ft_termcaps_savecurs(void)
{
	ft_putstr("\033[s");
}

void	ft_termcaps_screenclear(void)
{
	ft_putstr("\e[0;0H\e[2J");
}

void	ft_termcaps_upline(int nbline)
{
	ft_printf("\033[%dA", nbline);
}
