/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarque <samarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:23:12 by sara              #+#    #+#             */
/*   Updated: 2022/11/10 13:25:53 by samarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (destsize <= ft_strlen(dest))
		return (destsize + ft_strlen(src));
	j = ft_strlen(dest);
	while (src[j] != '\0' && j + 1 < destsize)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return ((ft_strlen(dest)) + ft_strlen(&src[i]));
}

/*#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    size_t r;
    size_t size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %ld\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}*/