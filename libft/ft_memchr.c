/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:45:21 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:08:36 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*p = str;

	while (0 < n)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str[] = "Hello";
// 	char	cha = '~';
// 	char	*result = ft_memchr(str, cha, strlen(str));

// 	if (result != NULL)
// 	{
// 		printf("%c is found at %ld", cha, result - str);
// 	}
// 	else
// 	{
// 		printf("%c is not found", cha);
// 	}
// 	return (0);
// }