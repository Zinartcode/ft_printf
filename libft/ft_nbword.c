/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 23:42:47 by azinnatu          #+#    #+#             */
/*   Updated: 2017/09/28 23:51:37 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbword(const char *s, const char c)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	if (s && c)
	{
		if (s[0] && s[0] != c)
			count = 1;
		else
			count = 0;
		i = 1;
		while (s[0] && s[i])
		{
			if (s[i - 1] == c && s[i] != c)
				count++;
			i++;
		}
	}
	return (count);
}
