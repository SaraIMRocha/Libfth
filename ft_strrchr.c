/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:23:31 by sara              #+#    #+#             */
/*   Updated: 2022/11/13 18:24:21 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*searches for the last occurrence of the character c (an unsigned char) 
in the string pointed to, by the argument str. This function returns a pointer 
to the last occurrence of character in str. If the value is not found, 
the function returns a null pointer*/

#include "libft.h"

char *ft_strrchr(const char *s, int c)

{
	int	i;
	int len;

	i = 0;
	len = ft_strlen(s);
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char*)s + (len));
		i--;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main () 
{
   int len;
   const char str[] = "jeez its working i guess";
   const char ch = 'i';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}