/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:37:38 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:06:07 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*p	;
	size_t			i	;

	p = ptr;
	i = 0;
	while (i < n)
	{
		*p++ = 0;
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	array[] = {1, 2, 3, 4, 5};
// 	size_t	i = 0;

// 	ft_bzero(array, sizeof(array));
// 	while (i < sizeof(array))
// 	{
// 		printf("%d", array[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }