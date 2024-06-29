/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:44:59 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/06 13:51:18 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*ptr;

	if (size > 0 && SIZE_MAX / size < n)
		return (NULL);
	ptr = (char *)malloc(n * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}
// #include <stdio.h>

// int	main()
// {
// 	int	*array = (int *)ft_calloc(5, sizeof(int));
// 	int	*array2 = (int *)calloc(5, sizeof(int));
// 	int	i = 0;
// 	int	k = 0;

// 	printf("Initialized array elements: ");
// 	while (i < 5)
// 	{
// 		printf("%d", array[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(array);

// 	printf("Initialized array elements: ");
// 	while (k < 5)
// 	{
// 		printf("%d", array2[k]);
// 		k++;
// 	}
// 	printf("\n");
// 	free(array2);
// }