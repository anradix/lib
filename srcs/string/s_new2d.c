/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_new2d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 19:13:37 by anradix           #+#    #+#             */
/*   Updated: 2020/06/22 19:56:34 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	**s_new2d(size_t y, size_t x)
{
	size_t	i;
	char	**s;

	i = 0;
	if (!(s = (char**)malloc(sizeof(char) * ((y+1)))))
		return (NULL);
	while (i < y)
		s[i++] = s_new(x);
	s[i] = NULL;
	return (s);
}
