/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:35:28 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 16:54:08 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	current = lst;
	while (current)
	{
		new_content = f(current->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		current = current->next;
	}
	return (new_lst);
}
// #include <stdio.h>
// #include <stdlib.h>

// void	*double_content(void *content)
// {
// 	int	*num;
// 	int	*result;

// 	num = (int *)content;
// 	result = (int *)malloc (sizeof(int));
// 	if (result == NULL)
// 		return (NULL);
// 	*result = (*num) * 2;
// 	return (result);
// }

// int	main()
// {
// 	t_list	*lst = NULL;
// 	int	*data1 = (int *)malloc(sizeof(int));
// 	int	*data2 = (int *)malloc(sizeof(int));
// 	int	*data3 = (int *)malloc(sizeof(int));

// 	*data1 = 1;
// 	*data2 = 2;
// 	*data3 = 3;
// 	ft_lstadd_back(&lst, ft_lstnew(data1));
// 	ft_lstadd_back(&lst, ft_lstnew(data2));
// 	ft_lstadd_back(&lst, ft_lstnew(data3));

// 	t_list	*new_list = ft_lstmap(lst, &double_content, &del);
// 	t_list	*current = new_list;
// 	while (current)
// 	{
// 		printf("%d", *((int *)current->content));
// 		current = current->next;
// 	}
// 	printf("\n");
// 	return (0);
// }