/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:22:39 by sara              #+#    #+#             */
/*   Updated: 2022/11/12 20:39:14 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memcmp() function compares the first n bytes (each
interpreted as unsigned char) of the memory areas s1 and s2.*/

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			res = (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
			i++;
		}
	}
	return (res);
}

/*#include <stdio.h>
#include <string.h>

int main () 
{
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
}*/