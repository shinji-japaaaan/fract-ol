/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:52:47 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:08:40 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1 = str1;
	const unsigned char	*s2 = str2;

	while (0 < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		n--;
		s1++;
		s2++;
	}
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	*str1 = "Hello";
// 	char	*str2 = "Hf";

// 	int	result = ft_memcmp(str1, str2, 5);

// 	if (result == 0)
// 	{
// 		printf("strings are equal");
// 	}
// 	else if (result < 0)
// 	{
// 		printf("str2 is greater");
// 	}
// 	else
// 	{
// 		printf("str1 is greater");
// 	}
// 	return (0);
// }