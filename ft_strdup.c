/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:23:05 by sara              #+#    #+#             */
/*   Updated: 2022/11/15 16:37:46 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARY
#include <string.h>
DESCRIPTION
The strdup() function allocates sufficient memory for a copy of the string 
s1, does the copy, and returns a pointer to it.
PARAMETERS
#1. The string to duplicate.
RETURN VALUES
The strdup() function returns thE pointer to the copy of s1.*/

//https://www.youtube.com/watch?v=d1gGryidv18

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;
	size_t	len;

	len = ft_strlen(s1) + 1;
	s2 = malloc(sizeof(char) * len + 1);
	i = 0;
	if (!s2)
		return (0);
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*int		main(void)
{
	char	*result;

	result = ft_strdup("just testing ma friend");
	printf("%s\n", result);
	return (0);
}*/

// C program to demonstrate strdup()
/*#include<stdio.h>
#include<string.h>

int main()
{
	char source[] = "Just testing ma friend";

	// A copy of source is created dynamically
	// and pointer to copy is returned.
	char* target = ft_strdup(source);

	printf("%s\n", target);
	return (0);
}*/
