/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_alloc2d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 00:24:39 by anradix           #+#    #+#             */
/*   Updated: 2020/07/17 13:31:38 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	**m_alloc2d(size_t y, size_t x, char c)
{
	size_t	i;
	char	**tab;

	i = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (y + 1))))
		return (NULL);
	while (i < y)
		if (!(tab[i++] = m_alloc(x, c)))
			return (NULL);
	tab[i] = NULL;
	return (tab);
}
