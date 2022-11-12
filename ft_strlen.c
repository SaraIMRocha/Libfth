/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarque <samarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:19:47 by sara              #+#    #+#             */
/*   Updated: 2022/11/09 16:57:19 by samarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

/*int	main(void)
{
	char str[] = "Ola Migus";
	char *p_str;
	p_str = str;
	int count = ft_strlen(p_str);	
	printf("%d\n", count);
}*/