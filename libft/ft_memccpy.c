/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 23:42:47 by azinnatu          #+#    #+#             */
/*   Updated: 2017/09/28 23:51:07 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	c2;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	c2 = (unsigned char)c;
	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	while (i < n && s[i] != c2)
	{
		d[i] = s[i];
		i++;
	}
	if (i == n)
		return (NULL);
	if (s[i] == c2)
	{
		d[i] = s[i];
		i++;
	}
	return ((void*)(d + i));
}
