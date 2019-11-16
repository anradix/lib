/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_len.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:38:44 by anradix           #+#    #+#             */
/*   Updated: 2019/11/16 21:36:36 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The s_len() function returns the len of s, from len to c. If c is not found
** slen return the len until '\0'.
*/

#include "lib.h"

size_t	s_len(char *s, size_t len, char c)
{
	return (!s || *s == c || !*s) ? len : s_len(s + 1, len + 1, c); 
}
