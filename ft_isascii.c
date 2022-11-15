/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:22:26 by sara              #+#    #+#             */
/*   Updated: 2022/11/15 16:46:29 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include<stdio.h>
#include<ctype.h>
int main()
{
  char val= 'd';
  if(ft_isascii(val))
    printf("This is ascii character \n");
   else
    printf("This is not ascii character \n");
  return 0;
}*/