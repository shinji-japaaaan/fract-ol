/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:47:00 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 16:59:48 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last = NULL;

	if ((unsigned char)c == '\0')
		return ((char *)str + ft_strlen(str));
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
			last = str;
		str++;
	}
	return ((char *)last);
}
// #include <stdio.h>

// #include <string.h>

// int	main(void)
// {
// 	char	str[] = "Hello,world";
// 	char	c = 'o';
// 	char	*result = ft_strrchr(str, c);
// 	char	*result2 = strrchr(str, c);

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