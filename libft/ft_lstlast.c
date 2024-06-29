/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:08:48 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/06 13:50:33 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int main()
// {
//     t_list  *list1 = NULL;
//     ft_lstadd_back(&list1, 10);
//     ft_lstadd_back(&list1, 20);
//     ft_lstadd_back(&list1, 30);

//     t_list  *list2 = NULL;
//     ft_lstadd_back(&list2, 100);
//     ft_lstadd_back(&list2, 200);
//     ft_lstadd_back(&list2, 300);

//     printf("list1: ");
//     print_list(list1);
//     printf("list 2: ");
//     print_list(list2);

//     t_list  *last_node_list1 = ft_lstlast(list1);
//     printf("last node of list1 is %d\n", last_node_list1);

//     t_list  *last_node_list2 = ft_lstlast(list2);
//     printf("last node of list2 is %d\n", last_node_list2);

//     free(list1);
//     free(list2);
// }
