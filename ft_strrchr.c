/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coschmit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:15:08 by coschmit          #+#    #+#             */
/*   Updated: 2018/11/14 11:35:59 by coschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmp;

	tmp = s;
	while (*tmp)
		tmp++;
	if (c == '\0')
		return ((char*)tmp);
	while (--tmp >= s)
		if (c == *tmp)
			return ((char*)tmp);
	return (NULL);
}
