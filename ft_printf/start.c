/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 16:51:36 by azinnatu          #+#    #+#             */
/*   Updated: 2017/09/27 17:39:47 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	start(int nbarg, ...)
{
	va_list	ap;
	int		i;
	int		min;
	int		tmp;

	i = nbarg;
	if (nbarg <= 0)
		return (0);
	va_start(ap, nbarg);
	min = va_arg(ap, int);
	while (i-- > 1)
	{
		tmp = va_arg(ap, int);
		if (tmp < min)
			min = tmp;
	}
	va_end(ap);
	return (min);
}
