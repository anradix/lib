/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_exit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 14:54:48 by anradix           #+#    #+#             */
/*   Updated: 2020/07/28 01:23:10 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int	m_exit(char *frmt, ...)
{
	va_list ap;

	if (!frmt)
		return (0);
	va_start(ap, frmt);
	while(*frmt)
	{
		if (*frmt == 'a')
			free(va_arg(ap, char*));
		if (*frmt == 'b')
			m_free2d(va_arg(ap, char**));
		frmt++;
	}
	va_end(ap);	
	return (0);
}
