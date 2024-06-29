/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:06:21 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/08 11:24:44 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (('0' <= c && c <= '9')
		|| ('a' <= c && c <= 'z')
		|| ('A' <= c && c <= 'Z'));
}

#include <stdio.h>

int	main(void)
{
	char	c;

	c = 0;
	if (ft_isalnum(c))
	{
		printf("%c is an alphanumeric character.\n", c);
	}
	else
	{
		printf("%c is not an alphanumeric character.\n", c);
	}
	return (0);
}
