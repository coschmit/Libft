/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coschmit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:25:22 by coschmit          #+#    #+#             */
/*   Updated: 2018/11/16 17:15:50 by coschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_size(char const *s, char c)
{
	int			i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char		*get_next_word(char const *s, char c)
{
	int			size_word;
	char		*str;

	size_word = get_size(s, c);
	str = NULL;
	if (!(str = ft_strnew(size_word)))
		return (NULL);
	str = ft_strncpy(str, s, size_word);
	return (str);
}

static void		ft_init_var(int *i, int *i_tab)
{
	*i_tab = 0;
	*i = 0;
}

char			**ft_strsplit(char const *s, char c)
{
	int			i;
	int			words;
	char		**tab;
	int			i_tab;

	if (!s)
		return (NULL);
	ft_init_var(&i, &i_tab);
	words = ft_count_words(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			tab[i_tab++] = get_next_word(&s[i], c);
			i += get_size(&s[i], c);
		}
		else
			i++;
	}
	if (!(tab[i_tab] = (char*)malloc(sizeof(char))))
		return (NULL);
	tab[i_tab] = 0;
	return (tab);
}
