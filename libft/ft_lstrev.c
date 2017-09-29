/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 23:42:47 by azinnatu          #+#    #+#             */
/*   Updated: 2017/09/28 23:50:54 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrev(t_list **lst)
{
	t_list	*bfr;
	t_list	*bfr2;

	if (!lst || !*lst)
		return ;
	bfr = NULL;
	while (*lst)
	{
		bfr2 = (*lst)->next;
		(*lst)->next = bfr;
		bfr = *lst;
		*lst = bfr2;
	}
	*lst = bfr;
}
