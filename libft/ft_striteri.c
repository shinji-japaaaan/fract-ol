/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:19:35 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:09:32 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	if (s == NULL || f == NULL)
		return ;
	index = 0;
	while (*s != '\0')
	{
		f(index, s);
		s++;
		index++;
	}
}
// #include <stdio.h>

// void	ft_uppercase(unsigned int i, char *c)
// {
// 	(void)i;
// 	if ('a' <= *c && *c <= 'z')
// 		*c = *c - 32;
// }

// int	main()
// {
// 	char	*str = (char *)malloc(10);

// 	str = (char *)malloc(10);
// 	if (str == NULL)
// 	{
// 		printf("Error\n");
// 		return (0);
// 	}
// 	str[0] = 'H';
// 	str[1] = 'e';
// 	str[2] = 'l';
// 	str[3] = 'l';
// 	str[4] = 'o';
// 	str[5] = '\0';
// 	printf("Original: %s\n",str);
// 	ft_striteri(str, &ft_uppercase);
// 	printf("Modified: %s\n", str);
// 	free(str);
// 	return (0);
// }