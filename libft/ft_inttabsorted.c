/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inttabsorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 23:42:47 by azinnatu          #+#    #+#             */
/*   Updated: 2017/09/28 23:50:04 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_inttabsorted(int *tab, int size)
{
	int i;
	int rev;

	i = -1;
	rev = 0;
	while (++i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			rev = 1;
			break ;
		}
	}
	i = -1;
	while (++i < size - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			if (rev)
				return (0);
			rev = -1;
			break ;
		}
	}
	return (rev);
}
