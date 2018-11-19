/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coschmit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:14:36 by coschmit          #+#    #+#             */
/*   Updated: 2018/11/16 13:37:32 by coschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*pdst;

	pdst = dst;
	while (*src != '\0' && n > 0)
	{
		*pdst++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*pdst++ = '\0';
		n--;
	}
	return (dst);
}
