/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_select.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 16:51:36 by azinnatu          #+#    #+#             */
/*   Updated: 2017/09/27 17:39:17 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*select_p(t_pf_data *data, va_list ap)
{
	char *a;

	a = ft_itoa_base(va_arg(ap, t_intmax), 16);
	if (data->precision > (int)ft_strlen(a))
		a = ft_strjoin(ft_chartostr('0', data->precision - ft_strlen(a)), a, 3);
	if (data->precision < 0 && ft_strcmp("0", a) == 0)
		ft_strclr(a);
	a = ft_strjoin(data->ox, a, 2);
	if (data->flag.sizeend > (int)ft_strlen(a))
		a = (!data->flag.signminus && data->flag.cmpltchar != '0') ?
			(ft_strjoin(ft_chartostr(' ', data->flag.sizeend -
			ft_strlen(a)), a, 3)) : (ft_strjoin(a, ft_chartostr(
			data->flag.cmpltchar, data->flag.sizeend - ft_strlen(a)), 3));
	return (a);
}
