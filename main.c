/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 09:46:53 by anradix           #+#    #+#             */
/*   Updated: 2020/07/20 10:22:15 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*m_set(char *s, char c, size_t n)
{
	while (n--)
		s[n] = c;
	return (s);
}

char	*m_alloc(size_t n, char c)
{
	char *s;

	if (!(s = (char*)malloc(sizeof(char) * ((n + 1)))))
		return (NULL);
	s[n] = '\0';
	return (m_set(s, c, n));
}

int	main(void)
{

	char **s;

	s = malloc(sizeof(char*) * 13 + 1);
	int i = 0;
	while (i < 13)
	{
		s[i] = m_alloc(5, 'b');
		i++;
	}
	s[i] = NULL;

	i = 0;
	while (i < 13)
	{
		free(s[i]);
		i++;
	}
	s = NULL;
	
	return (0);
}
