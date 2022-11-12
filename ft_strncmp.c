/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarque <samarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:22:59 by sara              #+#    #+#             */
/*   Updated: 2022/11/10 13:25:46 by samarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (s1[i] || s2[i] && res == 0 && (i < n))
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
		}
		i++;
	}
	return (res);
}

/*int	main(void)
{
	printf("\nTest de ft_strncmp :\n");
	printf("0 : %d\n", ft_strncmp("test", "test", 4));
	printf("-50 : %d\n", ft_strncmp("test", "test2", 5));
	printf("0 : %d\n", ft_strncmp("test", "test2", 4));
	printf("128 : %d\n", ft_strncmp("\200", "\0", 4));
	printf("1 : %d\n", ft_strncmp("tesu", "test", 6));
}*/