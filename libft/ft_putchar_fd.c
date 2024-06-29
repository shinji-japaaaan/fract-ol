/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:27:10 by sishizaw          #+#    #+#             */
/*   Updated: 2024/05/01 17:08:58 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// #include <stdio.h>
// #include <stdlib.h>

// int	main()
// {
// 	char c = 'A';
// 	int	fd = STDOUT_FILENO;
// 	ft_putchar_fd(c, fd);
// 	return (0);
// }