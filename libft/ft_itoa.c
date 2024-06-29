/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 13:11:31 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/04 07:54:51 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_num_0(void)
{
	char	*str;

	str = (char *)malloc(2 * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static char	*ft_itoa_convert(int num_digits, long long num)
{
	char	*str;

	str = (char *)malloc((num_digits + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[num_digits] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	while (num != 0)
	{
		str[num_digits - 1] = '0' + (num % 10);
		num = num / 10;
		num_digits--;
	}
	return (str);
}

char	*ft_itoa(int num)
{
	int				num_digits;
	long long		temp;

	if (num == 0)
		return (ft_num_0());
	num_digits = 0;
	if (num < 0)
		num_digits = 1;
	temp = num;
	while (temp != 0)
	{
		temp = temp / 10;
		num_digits++;
	}
	if (num == -2147483648)
		return (ft_itoa_convert(11, (long long)num));
	return (ft_itoa_convert(num_digits, (long long)num));
}
// #include <stdio.h>

// int	main()
// {
// 	int	num = -2147483648;
// 	char	*str = ft_itoa(num);

// 	if (str == NULL)
// 	{
// 		printf("memory allocation failed\n");
// 		return (1);
// 	}
// 	printf("interger is %d\nstring is %s\n", num, str);
// 	free(str);
// 	return (0);
// }