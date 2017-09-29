/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gather.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 23:42:47 by azinnatu          #+#    #+#             */
/*   Updated: 2017/09/28 23:49:34 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_gather(t_tab tab, int ch)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;
	size_t	c;

	i = 0;
	j = 0;
	c = 0;
	len = ft_tablen(tab, 1);
	str = ft_strnew(len);
	while (tab[j])
	{
		while (tab[j][c])
			str[i++] = tab[j][c++];
		if (ch != 0)
			str[i++] = ch;
		c = 0;
		j++;
	}
	return (str);
}
