/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_str.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 01:17:28 by anradix           #+#    #+#             */
/*   Updated: 2020/07/28 04:02:15 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

void	p_str(char *s)
{
	write(1, s, s_len(s, 0, 0));
}
