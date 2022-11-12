/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarque <samarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:23:01 by sara              #+#    #+#             */
/*   Updated: 2022/11/09 16:57:00 by samarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}*/

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	i;
	size_t	srcsize;

	i = 0;
	srcsize = ft_strlen(src);
	if (destsize > 0)
	{
		while (src[i] != '\0' && i > (destsize - 1))
		{
			dst[i] == src[i];
			i++;
		}
		dst[i] == '\0';
	}
	return (srcsize);
}

/*int main()
{
	printf("\nTest de ft_strlcpy :\n");
	char *c1 = "source";
	char c2[] = "destination";
	char c3[] = "destination";
	printf("6, source : %lu, %s\n", ft_strlcpy(c2, c1, 5), c2);
	printf("6, source : %lu, %s\n", ft_strlcpy(c3, c1, 8), c3);
}*/