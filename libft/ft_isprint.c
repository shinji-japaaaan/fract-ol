/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:56:27 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:07:59 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	c;

// 	c = '5';
// 	if (ft_isprint(c))
// 	{
// 		printf("%c is a printable character\n", c);
// 	}
// 	else
// 	{
// 		printf("%c is not a printable character\n", c);
// 	}
// 	return (0);
// }
