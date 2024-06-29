/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:06:21 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:07:55 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (('0' <= c && c <= '9'));
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	c;

// 	c = '5';
// 	if (ft_isdigit(c))
// 	{
// 		printf("%c is a digit.\n", c);
// 	}
// 	else
// 	{
// 		printf("%c is not a digit.\n", c);
// 	}
// 	return (0);
// }
