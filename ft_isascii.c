/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarque <samarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:22:26 by sara              #+#    #+#             */
/*   Updated: 2022/11/09 15:25:48 by samarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include<stdio.h>
#include<ctype.h>
int main()
{
  char val= ' ';
  if(isascii(val))
    printf("This is ascii character \n");
   else
    printf("This is not ascii character \n");
  return 0;
}*/