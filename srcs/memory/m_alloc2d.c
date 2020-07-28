/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_alloc2d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 00:24:39 by anradix           #+#    #+#             */
/*   Updated: 2020/07/28 02:47:47 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	**m_alloc2d(size_t y, size_t x, char c)
{
	char	**s;

	if (!(s = (char**)malloc(sizeof(char*) * y+1)))
		return (NULL);
	s[y] = NULL;
	while (y--)
		if (!(s[y] = m_alloc(x, c)))
			return (NULL);
	return (s);
}
