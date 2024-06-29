/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:13:59 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:08:43 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	csrc = (char *)src;
	cdest = (char *)dest;
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "Hello";
// 	char	dest[10];

// 	ft_memcpy((void *)0, (void *)0, 3);

// 	printf("dest contens are %s", dest);
// 	return (0);
// }