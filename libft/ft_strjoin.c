/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:24:55 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/04 08:01:34 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*cpy(char *dest, char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest + i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	result = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (result == NULL)
		return (NULL);
	cpy(cpy(result, (char *)s1), (char *)s2);
	return (result);
}
// #include <stdio.h>

// int main()
// {
// 	char s1[] = "Hello,";
// 	char s2[] = "world!";
// 	char *result = ft_strjoin(s1, s2);
// 	if (result != NULL) {
// 		printf("Concatenated string: %s\n", result);
// 		free(result);
// 	} else {
// 		printf("Memory allocation failed.\n");
// 	}
// 	return (0);
// }