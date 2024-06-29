/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:13:56 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/06 13:50:20 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// #include <stdio.h>
// #include <stdlib.h>

// int  main()
// {
//  t_list *list = NULL;
//  int data1 = 1;
//  int data2 = 2;
//  int data3 = 3;

//  // 1:I don't know the following is not available
//  // t_list *node1 = ft_lstnew(&data1);
//  // t_list *node2 = ft_lstnew(&data2);
//  // t_list *node3 = ft_lstnew(&data3);
//  // ft_lstadd_back(&list, ft_lstnew(node1));
//  // ft_lstadd_back(&list, ft_lstnew(node2));
//  // ft_lstadd_back(&list, ft_lstnew(node3));

//  // 2:The following ia available
//  ft_lstadd_back(&list, ft_lstnew(&data1));
//  ft_lstadd_back(&list, ft_lstnew(&data2));
//  ft_lstadd_back(&list, ft_lstnew(&data3));

//  printf("conten of list: ");
//  t_list  *current = list;
//  t_list  *temp = current;
//  while (current != NULL)
//  {
//      int *content = (int *)current->content;
//      printf("%d ", *content);
//      current = current->next;
//  }
//  printf("\n");

//  free(temp);
//  return (0);
// }
