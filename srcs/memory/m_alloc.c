/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_alloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:54:40 by anradix           #+#    #+#             */
/*   Updated: 2020/07/17 13:38:15 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	*m_alloc(size_t n, char c)
{
	char *s;

	if (!(s = (char*)malloc(sizeof(char) * ((n + 1)))))
		return (NULL);
	s[n] = '\0';
	return (m_set(s, c, n));
}
