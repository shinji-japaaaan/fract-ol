/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:04:49 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:09:21 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}
// #include <stdio.h>

// #include <string.h>

// int	main(void)
// {
// 	char	str[] = "Hello";
// 	int	c = 'o';

// 	char	*result = ft_strchr(str, c);
// 	char	*result2 = strchr(str, c);
// 	if (result != NULL)
// 	{
// 		printf("%c is found at the position of %ld\n", c, result - str);
// 		printf("%c is found at the position of %ld", c, result2 - str);
// 	}
// 	else
// 	{
// 		printf("%c is not found", c);
// 	}
// 	return (0);
// }