/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:42:18 by sara              #+#    #+#             */
/*   Updated: 2022/11/22 18:45:54 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
Allocates (with malloc) and returns a string representing the integer 
received as an argument. Negative numbers must be handled.
PARAMETERS
#1. the integer to convert.
RETURN VALUES
The string representing the integer. NULL if the allocation fails.*/

#include "libft.h"
#include <limits.h>

char	*ft_itoa(int n)

{
	char			buf[sizeof(int ) * CHAR_BIT / 3 + 3];
	char			*s;
	unsigned int	v;

	v = n;
	if (n < 0)
	{
		v = -v;
	}
	s = buf + sizeof(buf);
	*--s = '\0';
	while (v >= 10)
	{
		*--s = '0' + v % 10;
		v /= 10;
	}
	*--s = '0' + v;
	if (n < 0)
		*--s = '-';
	return (ft_strdup(s));
}
