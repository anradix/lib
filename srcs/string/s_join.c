/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_join.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 07:38:47 by anradix           #+#    #+#             */
/*   Updated: 2019/12/18 09:01:49 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*s_join(char *s1, char *s2)
{
	char	*str;
	size_t	len;

	len = s_len(s1, 0, '\0') + s_len(s2, 0, '\0');
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s_cat(str, s1);
	s_cat(str, s2);
	return (str);
}
