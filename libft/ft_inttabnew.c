/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inttabnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 23:42:47 by azinnatu          #+#    #+#             */
/*   Updated: 2017/09/28 23:50:00 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_inttabnew(size_t size)
{
	int	*dst;
	int	i;

	dst = (int *)malloc(sizeof(int) * (size + 1));
	if (dst)
	{
		i = size + 1;
		while (--i >= 0)
			dst[i] = -1;
		return (dst);
	}
	return (NULL);
}
