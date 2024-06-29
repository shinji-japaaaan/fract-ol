/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 08:29:08 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/06 13:50:24 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdlib.h>
// #include <stdio.h>

// int main(void)
// {
// 	t_list *list = NULL;
// 	int data1 = 42;
// 	int data2 = 24;

// 	t_list *node1 = ft_lstnew(&data1);
// 	t_list *node2 = ft_lstnew(&data2);

// 	ft_lstadd_front(&list, node1);
// 	ft_lstadd_front(&list, node2);

// 	printf("List contents:\n");
// 	t_list *current = list;
// 	t_list  *temp = current;
// 	while (current != NULL)
// 	{
// 		int *content = (int *)current->content;
// 		printf("%d\n", *content);
// 		current = current->next;
// 	}
// 	free(temp);
// 	return (0);
// }
