/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 23:42:47 by azinnatu          #+#    #+#             */
/*   Updated: 2017/09/28 23:51:14 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			n2;
	unsigned char	*c1;
	unsigned char	*c2;

	n2 = 0;
	c1 = (unsigned char*)s1;
	c2 = (unsigned char*)s2;
	while (n2 < n)
	{
		if (c1[n2] != c2[n2])
			return (c1[n2] - c2[n2]);
		n2++;
	}
	return (0);
}
