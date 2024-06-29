/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:00:26 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 16:54:30 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int			count;
	t_list		*current;

	count = 0;
	current = lst;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
// #include <stdlib.h>
// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*lst = NULL;
// 	int		len;

// 	int	data1 = 42;
// 	int	data2 = 13;
// 	int	data3 = 10;
// 	ft_lstadd_front(&lst, ft_lstnew(&data1));
// 	ft_lstadd_front(&lst, ft_lstnew(&data2));
// 	ft_lstadd_front(&lst, ft_lstnew(&data3));

// 	len = ft_lstsize(lst);
// 	printf("%d\n", len);
// 	return (0);
// }
