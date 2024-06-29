/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:10:16 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:06:38 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t number)
{
	unsigned char	*p;
	size_t			i;

	p = ptr;
	i = 0;
	while (i < number)
	{
		*p++ = (unsigned char)value;
		++i;
	}
	return (ptr);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	array[10];
// 	int	i;

// 	ft_memset(array, 'a', 5);
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%c", array[i]);
// 		++i;
// 	}
// 	printf("\n");
// 	return (0);
// }
