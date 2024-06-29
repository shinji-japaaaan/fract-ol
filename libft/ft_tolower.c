/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:53:51 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:10:13 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c = c - 'A' + 'a';
	return (c);
}
// #include <stdio.h>

// #include <ctype.h>

// int	main(void)
// {
// 	int	c;

// 	c = 'A';
// 	printf("converted character is %c\n", ft_tolower(c));
// 	printf("converted character is %c", tolower(c));
// 	return (0);
// }