/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:14:15 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/06 13:50:48 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;

	slen = ft_strlen(src);
	if (dest == NULL && size == 0)
		return (slen);
	dlen = ft_strlen(dest);
	i = 0;
	if (size <= dlen)
		return (size + slen);
	while (src[i] && dlen + i < size - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (slen + dlen);
}
// #include <stdio.h>

// #include <string.h>
// int	main(void)
// {
// 	const char	*src = ",worldaaaaaaaaaaaaaaaaaa";
// 	char	dest[25] = "Hello,Hello,Hello";
// 	char	dest2[25] = "Hello,Hello,Hello";
// 	size_t 	size = ft_strlcat(((void *)0), src, 0);
// 	size_t 	size2 = strlcat(((void *)0), src, 0);

// 	printf("unified strings are %s\n", dest);
// 	printf("length of unified strings is %zu\n", size);
// 	printf("unified strings are %s\n", dest2);
// 	printf("length of unified strings is %zu\n", size2);
// 	return (0);
// }