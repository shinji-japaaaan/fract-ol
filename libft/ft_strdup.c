/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:01:27 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:09:28 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*dest;
	char	*ptr;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *)malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	ptr = dest;
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
// #include <stdio.h>

// #include <string.h>

// int	main()
// {
// 	char	*str = "Hello";
// 	char	*str2 = ft_strdup(str);
// 	char	*str3 = strdup(str);

// 	if (str2 == NULL)
// 	{
// 		printf("memori allocation failed");
// 		return (1);
// 	}

// 	printf("original strings are %s\n", str);
// 	printf("made function: dupricated strings are %s\n", str2);
// 	printf("original function: dupricated strings are %s", str3);

// 	free(str2);
// 	return (0);
// }