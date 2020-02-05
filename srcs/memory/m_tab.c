/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_tab.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 16:04:08 by anradix           #+#    #+#             */
/*   Updated: 2020/02/05 16:09:53 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

void	**m_tab(size_t y, size_t x, char c)
{
	size_t	i;
	size_t	j;
	void	**tab;

	i = 0;
	if (!(tab = (void **)malloc(sizeof(void *) * (y + 1))))
		return (NULL);
	while (i < y)
	{
		j = 0;
		if (!(tab[i] = (void *)malloc(sizeof(void) * (x + 1))))
			return (NULL);
		m_set(&tab[i], c, x);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
