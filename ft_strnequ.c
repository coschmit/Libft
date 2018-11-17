/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coschmit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:41:04 by coschmit          #+#    #+#             */
/*   Updated: 2018/11/16 12:47:43 by coschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (!(s1 && s2))
			return (0);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
