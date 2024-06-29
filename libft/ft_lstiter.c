/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:30:58 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 16:53:14 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current)
	{
		f (current->content);
		current = current->next;
	}
}
// #include <stdio.h>
// #include <stdlib.h>

// void	print_content(void *content)
// {
// 	printf("%d", *((int *)content));
// }

// int	main()
// {
// 	t_list	*lst = NULL;
// 	int	data1 = 3;
// 	int	data2 = 2;
// 	int	data3 = 1;

// 	ft_lstadd_front(&lst, ft_lstnew(&data1));
// 	ft_lstadd_front(&lst, ft_lstnew(&data2));
// 	ft_lstadd_front(&lst, ft_lstnew(&data3));

// 	ft_lstiter(lst, &print_content);
// 	printf("\n");
// 	free(lst);
// }
