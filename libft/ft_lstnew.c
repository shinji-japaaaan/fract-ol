/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 07:54:46 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:08:30 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// #include <stdio.h>

// int	main()
// {
// 	int	data = 42;

// 	t_list *new_node = ft_lstnew(&data);
// 	int	*content_data = (int *)new_node->content;

// 	if (new_node)
// 	{
// 		printf("content of new node: %d\n", *content_data);
// 		free(new_node);
// 	}
// 	return (0);
// }