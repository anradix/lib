/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_copy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:11:53 by anradix           #+#    #+#             */
/*   Updated: 2020/07/28 02:30:16 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"
#include <stdio.h>

void	s_copy(char *src, char *dst)
{
	size_t i;

	i = 0;
	if (!src || !dst)
		return ;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
}
