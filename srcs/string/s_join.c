/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_join.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 07:38:47 by anradix           #+#    #+#             */
/*   Updated: 2020/07/17 13:47:05 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

char	*s_join(char *s1, char *s2)
{
	char *s3;

	if (!s1 || !s2)
		return (NULL);
	if (!(s3 = (char *)m_alloc((s_len(s1, 0, 0) + s_len(s2, 0, 0)), '\0')))
		return (NULL);
	s_cat(s3, s1);
	s_cat(s3, s2);
	return (s3);
}
