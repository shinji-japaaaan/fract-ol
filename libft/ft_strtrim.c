/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 08:50:45 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/04 08:06:15 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	trim_end(const char *s1, const char *set, size_t *start)
{
	size_t	end;
	int		found;
	int		i;

	end = ft_strlen(s1);
	while (end > *start)
	{
		found = 0;
		i = 0;
		while (set[i] != '\0')
		{
			if (s1[end - 1] == set[i])
			{
				found = 1;
				break ;
			}
			i++;
		}
		if (!found)
			break ;
		end--;
	}
	return (end);
}

static size_t	trim_start(const char *s1, const char *set)
{
	size_t	start;
	int		found;
	int		i;

	start = 0;
	while (s1[start] != '\0')
	{
		found = 0;
		i = 0;
		while (set[i] != '\0')
		{
			if (s1[start] == set[i])
			{
				found = 1;
				break ;
			}
			i++;
		}
		if (!found)
			break ;
		start++;
	}
	return (start);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	int		len;
	char	*trimed_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = trim_start(s1, set);
	end = trim_end(s1, set, &start);
	len = end - start;
	trimed_str = ft_substr(s1, start, len);
	if (trimed_str == NULL)
		return (NULL);
	trimed_str[len] = '\0';
	return (trimed_str);
}
// #include <stdlib.h>
// #include <stdio.h>

// int	main()
// {
// 	char	*s1 = "tripouille   xxx";
// 	char	*set = " x";

// 	char	*trimmed_str = ft_strtrim(s1, set);
// 	if (trimmed_str == NULL)
// 	{
// 		printf("Memory allocation failed");
// 		return (1);
// 	}
// 	printf("trimmed strings:%s\n", trimmed_str);
// 	free(trimmed_str);
// 	return (0);
// }
