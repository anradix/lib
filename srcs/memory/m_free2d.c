/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_free2d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 00:09:49 by anradix           #+#    #+#             */
/*   Updated: 2020/07/20 17:18:09 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"
#include <stdio.h>

void	m_free2d(char **s)
{
	int i;
	
	i = 0;
	while (s[i])
	{
		printf("ICI\n");
		free(s[i]);
		i++;
	}
	printf("LA\n");
	free(s);
	printf("OEH\n");
	s = NULL;
	printf("JIJI\n");
}
