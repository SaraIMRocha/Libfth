/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:38:30 by sara              #+#    #+#             */
/*   Updated: 2022/11/17 02:06:21 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
Applies the function ’f’ to each character of the ’s’ to create a new 
string (with malloc) resulting from successive applications of ’f’.
PARAMETERS
#1. The string on which to iterate.
#2. The function to apply to each character.
RETURN VALUES
The string created from the successive applications of ’f’. 
Returns NULL if the allocation fails.*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	str = ft_strdup(s);
	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
