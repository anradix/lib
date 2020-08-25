/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_split.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 07:18:56 by anradix           #+#    #+#             */
/*   Updated: 2020/08/25 08:40:33 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"
#include <stdio.h>

static int	wcount(char *s, char c)
{
	size_t nb_words;
	size_t i;

	nb_words = 0;
	i = 0;
	if (s[0] != c)
		nb_words++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			nb_words++;
		i++;
	}
	return (nb_words);
}

char	**s_split(char *s, char c)
{
	int j = 0;
	char **tab;
	int k;

	int nb_w = wcount(s, c);
	if (!s || (!(tab = (char**)malloc(sizeof(char*) * (nb_w + 1)))))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			if (!(tab[j] = m_alloc(s_len(&(*s), 0, c), '\0')))
				return (NULL);
			k = 0;
			while (*s && *s != c)
				tab[j][k++] = *(s++);
			tab[j][k] = '\0';
			j++;
		}
		else
			s++;
	}
	tab[j] = NULL;
	return (tab);
}
