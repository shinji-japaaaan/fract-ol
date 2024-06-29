/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:12:46 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/06 13:51:14 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_long_max(int sign)
{
	if (sign > 0)
		return ((int)LONG_MAX);
	else
		return ((int)LONG_MIN);
}

int	ft_atoi(const char *str)
{
	long	result	;
	int		sign	;

	result = 0;
	sign = 1;
	while (*str == ' ' || ('\t' <= *str && *str <= '\r'))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		if (result > (LONG_MAX - (*str - '0')) / 10)
			return (ft_long_max(sign));
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * (int)(result));
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	printf("made function: converted number is %d\n", ft_atoi("33"));
// 	printf("original function: converted number is %d\n\n", atoi("33"));
// 	return (0);
// }