/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarque <samarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:22:31 by sara              #+#    #+#             */
/*   Updated: 2022/11/10 13:27:43 by samarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 0 && c <= 31)
		return (0);
	else
		return (1);
}

/*#include<stdio.h>
#include<ctype.h>
int main()
{
  char val= '\t';
  if(ft_isprint(val))
    printf("This is printable \n");
   else
    printf("This is not printable \n");
  return 0;
}*/