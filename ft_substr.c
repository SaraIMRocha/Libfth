/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:37:10 by sara              #+#    #+#             */
/*   Updated: 2022/11/17 23:27:28 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
PARAMETERS
#1. The string from which to create the substring.
#2. The start index of the substring in the string ’s’.
#3. The maximum length of the substring.
RETURN VALUES
The substring. NULL if the allocation fails.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	i;
	size_t	j;
	char	*substr;

	substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			substr[j] = s[i];
			j++;
		}
		i++;
	}
	substr[j] = 0;
	return (substr);
}

/*int main()
{
    char src[] = "testing my ft_substr luv";
 
    int m = 7;
    int n = 15;
 
    char* dest = ft_substr(src, m, n);
 
    printf(":%s:\n", dest);
 
    return 0;
}*/