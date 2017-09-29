/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_select.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 16:51:36 by azinnatu          #+#    #+#             */
/*   Updated: 2017/09/28 23:55:12 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*select_n(va_list ap, t_ret *retval)
{
	int *n;

	n = va_arg(ap, int*);
	if (n)
		*n = (int)ft_strlen(retval->finalstr);
	return (ft_strnew(0));
}
