/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarque <samarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:23:39 by sara              #+#    #+#             */
/*   Updated: 2022/11/10 13:24:55 by samarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int main () {
   int i = 0;
   char str[] = "ola Migus\n";
	
   while( str[i] ) {
      putchar(ft_toupper(str[i]));
      i++;
   }
   
   return(0);
}*/