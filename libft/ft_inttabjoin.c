/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inttabjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 23:42:47 by azinnatu          #+#    #+#             */
/*   Updated: 2017/09/28 23:49:48 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_inttabjoin(int *tab1, int size1, int *tab2, int size2)
{
	int	*result;
	int	i;
	int	j;

	i = 0;
	j = 0;
	result = ft_inttabnew(size1 + size2);
	while (i < size1)
	{
		result[i] = tab1[i];
		i++;
	}
	while (j < size2)
		result[i++] = tab2[j++];
	return (result);
}
