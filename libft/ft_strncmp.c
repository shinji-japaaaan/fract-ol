/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:20:38 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:09:54 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	s1;
	unsigned char	s2;

	while (n > 0)
	{
		s1 = (unsigned char)*str1;
		s2 = (unsigned char)*str2;
		if (s1 != s2)
			return (s1 - s2);
		if (s1 == '\0' && s2 == '\0')
			break ;
		str1++;
		str2++;
		n--;
	}
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
//     char	*str1 = "Hello";
//     char	*str2 = "Hfll";
//     char	*str3 = "Hellx";

//     printf("cmp result 1 is %d\n", ft_strncmp(str1, str2, 5));
//     printf("cmp result 2 is %d\n", ft_strncmp(str2, str1, 5));
//     printf("cmp result 3 is %d\n", ft_strncmp(str3, str2, 5));

//     return (0);
// }