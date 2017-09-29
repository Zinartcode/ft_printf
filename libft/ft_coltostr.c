/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coltostr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 23:42:47 by azinnatu          #+#    #+#             */
/*   Updated: 2017/09/28 23:49:22 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_coltostr(char **array, size_t c)
{
	char	*str;
	size_t	i;

	i = 0;
	str = ft_strnew(4);
	while (array[i])
	{
		str[i] = array[i][c];
		i++;
	}
	return (str);
}
