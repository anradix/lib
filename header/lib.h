/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:48:15 by anradix           #+#    #+#             */
/*   Updated: 2019/11/16 22:09:23 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <string.h>
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>


/*
** string
*/
bool	s_diff(const char *s1, const char *s2);
size_t	s_len(char *s, size_t len, char c);
char	*s_new(size_t size);



/*
** conv
*/
int	c_atoi(const char *nptr);
char	*c_itoa(int nb, int base);
size_t	c_nbrlen(int nb, int base, size_t len);


#endif
