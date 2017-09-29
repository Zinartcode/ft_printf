/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   term_caps_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 16:51:36 by azinnatu          #+#    #+#             */
/*   Updated: 2017/09/27 17:39:52 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_termcaps_downline(int nbline)
{
	ft_printf("\033[%dB", nbline);
}

void	ft_termcaps_leftcurs(int nbcol)
{
	ft_printf("\033[%dD", nbcol);
}

void	ft_termcaps_lineclear(void)
{
	ft_putstr("\033[K");
}

void	ft_termcaps_poscurs(int line, int col)
{
	ft_printf("\033[%d;%dH", line, col);
}

void	ft_termcaps_restorecurs(void)
{
	ft_putstr("\033[u");
}
