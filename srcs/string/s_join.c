/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_join.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 07:38:47 by anradix           #+#    #+#             */
/*   Updated: 2019/12/18 07:46:16 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a newstring, result of the
** concatenation of s1 and s2. s1 and s2 will be free.
*/

#include "lib.h"

char	*s_join(char *s1, char *s2)
{
	char	*str;
	size_t	l1;
	size_t	l2;

	if (!s1 || !s2)
		return (NULL);
	l1 = s_len(s1, 0, '\0')
	l2 = s_len(s2, 0, '\0')
	if (!(str = (char *)malloc(sizeof(char) * (l1 + l2 + 1))))
		return (NULL);
	//ft_bzero(str, l1 + l2 + 1);
	s_lcat(str, s1, l1 + 1);
	s_lcat(str, s2, l2 + l1 + 1);
	free(s1);
	free(s2);
	return (str);
}
