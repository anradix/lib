/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_lcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 07:46:25 by anradix           #+#    #+#             */
/*   Updated: 2019/12/18 07:52:59 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The s_cat() function appends string src to the end of dst.
*/

#include "lib.h"

char	*s_cat(char *dst, char *src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
