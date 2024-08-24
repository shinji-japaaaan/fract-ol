/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:26:24 by sishizaw          #+#    #+#             */
/*   Updated: 2024/08/24 10:17:20 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	handle_key(int keycode, t_data *d)
{
	(void)d;
	if (keycode == 53)
		exit(0);
	return (0);
}

int	handle_mouse(int button, int x, int y, t_data *d)
{
	(void)x;
	(void)y;
	(void)d;
	if (button == 4)
		d->zoom *= 1.1;
	else if (button == 5)
		d->zoom /= 1.1;
	draw_fractal(d);
	return (0);
}

int	close_window(t_data *d)
{
	(void)d;
	exit(0);
}
