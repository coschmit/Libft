/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coschmit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:10:42 by coschmit          #+#    #+#             */
/*   Updated: 2018/11/08 19:13:07 by coschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	if (s)
	{
		if (((res = (char *)malloc(ft_strlen(s) + 1))) == NULL)
			return (NULL);
		i = 0;
		while (s[i])
		{
			res[i] = (*f)(s[i]);
			i++;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
