/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:53:48 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:09:50 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*result;
	int		i;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}
// #include <stdio.h>

// char	ft_uppercase1(unsigned int i, char c)
// {
// 	(void)i;
// 	if ('a' <= c && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// int	main()
// {
// 	char *str = "Hello";
// 	char *result = ft_strmapi(str, &ft_uppercase1);

// 	if (result)
// 	{
// 		printf("Original: %s\n", str);
// 		printf("Modified: %s\n", result);
// 		free(result);
// 	}
// 	else
// 		printf("Error\n");
// 	return (0);
// }
