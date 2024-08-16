/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:24:16 by sishizaw          #+#    #+#             */
/*   Updated: 2024/08/16 18:23:28 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = next;
	}
}

// void	del(void *content)
// {
// 	free(content);
// }

// int main(void)
// {
// 	t_list	*lst = NULL;
// 	t_list	*current;

// 	int	*d1 = (int *)malloc(sizeof(int));
// 	int	*d2 = (int *)malloc(sizeof(int));
// 	int	*d3 = (int *)malloc(sizeof(int));

// 	*d1 = 42;
// 	*d2 = 13;
// 	*d3 = 10;

// 	ft_lstadd_front(&lst, ft_lstnew(data1));
// 	ft_lstadd_front(&lst, ft_lstnew(data2));
// 	ft_lstadd_front(&lst, ft_lstnew(data3));

// 	current = lst;
// 	while (current != NULL)
// 	{
// 		printf("%d\n", *((int *)current->content));
// 		current = current->next;
// 	}
// 	ft_lstclear(&lst, del);
// 	if (lst == NULL)
// 		printf("削除完了\n");
// 	return (0);
// }
