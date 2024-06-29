/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:36:12 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:01:13 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c = c - 'a' + 'A';
	return (c);
}
// #include <stdio.h>

// #include <ctype.h>

// int	main(void)
// {
// 	int	c;

// 	c = 'a';
// 	printf("converted character is %c\n", ft_toupper(c));
// 	printf("converted character is %c\n", toupper(c));
// 	return (0);
// }