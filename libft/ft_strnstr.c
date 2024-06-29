/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:14:17 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/06 13:50:59 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_search(const char *str1, const char *str2, size_t n)
{
	const char	*s1;
	const char	*s2;

	s1 = str1;
	s2 = str2;
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (*s2 == '\0')
		return ((char *)str1);
	return (NULL);
}

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	if (*str2 == '\0' || str2 == NULL)
		return ((char *)str1);
	if (n == 0)
		return (NULL);
	while (*str1 != '\0' && n > 0)
	{
		if (*str1 == *str2)
		{
			if (ft_search(str1, str2, n))
				return ((char *)str1);
		}
		str1++;
		n--;
	}
	return (NULL);
}
// #include <stdio.h>

// #include <string.h>

// int	main(void)
// {
// 	char	str1[] = "Hello,world";
// 	char	*str2 = "world";
// 	char	*result1 = ft_strnstr(str1, str2, 15);
// 	char	*result2 = strnstr(str1, str2, 15);

// 	if (result1 != NULL)
// 	{
// 		printf("made function: found at %ld\n", result1 - str1);
// 		printf("original function: found at %ld\n", result2 - str1);
// 	}
// 	else
// 	{
// 		printf("made function: not found\n");
// 	}
// 	return (0);
// }
