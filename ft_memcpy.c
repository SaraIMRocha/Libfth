/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarque <samarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:22:44 by sara              #+#    #+#             */
/*   Updated: 2022/11/10 14:39:40 by samarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function copies n characters from memory area src to memory area dest

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	unsigned const char	*sorc;

	i = 0;
	dest = (unsigned char *)dst;
	sorc = (unsigned const char *)src;
	while (i < n)
	{
		dest[i] == sorc[i];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

int	main()

{
	char str[] = "Ola peasants";
	memcpy(str, str + 3, 3);
	printf("%s\n", str);
	ft_memcpy(str, str + 3, 3);
	printf("%s\n", str);
	return(0);
}*/