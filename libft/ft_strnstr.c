/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <azinnatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 23:42:47 by azinnatu          #+#    #+#             */
/*   Updated: 2017/09/28 23:53:52 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	n2;
	int		lastresult;

	if (*s2 == '\0')
		return ((char*)s1);
	n2 = ft_strlen(s2);
	lastresult = 1;
	while (n2 <= n && *s1 != '\0'
		&& (lastresult = ft_strncmp(s1, s2, n2)))
	{
		n--;
		s1++;
	}
	if (lastresult != 0)
		return (NULL);
	else
		return ((char *)s1);
}
