/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_dup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 17:24:55 by anradix           #+#    #+#             */
/*   Updated: 2020/06/20 17:31:59 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	*s_dup(const char *s)
{
	size_t	len;
	char	*dup;
	
	len = s_len(s, 0, 0);
	if (s == 0 || !(dup = s_new(len)))
		return (NULL);
	while (len--)
		dup[len] = s[len];
	return (dup);
}
