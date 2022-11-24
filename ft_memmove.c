/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:22:47 by sara              #+#    #+#             */
/*   Updated: 2022/11/24 00:20:10 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARY
#include <string.h>
DESCRIPTION
The memmove() function copies len bytes from string src to string dst.  
The two strings may overlap; the copy is always done in a nondestructive 
manner.
PARAMETERS
#1. The destiny pointer in which to copy.
#2. The source pointer to copy.
#3. The number of bytes to copy the source string.
RETURN VALUES
The memmove() function returns the original value of dst.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	if (!dst || !s)
		return (NULL);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
