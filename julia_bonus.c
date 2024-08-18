/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:27:56 by sishizaw          #+#    #+#             */
/*   Updated: 2024/08/18 19:11:57 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

static int	iter_julia(t_julia *p, t_data *d)
{
	int	i;	

	i = 0;
	while (i < d->max_iter)
	{
		p->old_r = p->new_r;
		p->old_i = p->new_i;
		p->new_r = p->old_r * p->old_r - p->old_i * p->old_i + d->cr;
		p->new_i = 2 * p->old_r * p->old_i + d->ci;
		if ((p->new_r * p->new_r + p->new_i * p->new_i) > 4)
			break ;
		i++;
	}
	return (i);
}

void	draw_julia(t_data *d)
{
	int		x;
	int		y;
	int		i;
	int		color;
	t_julia	p;

	y = 0;
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			p.new_r = 1.5 * (x - WIDTH / 2) / (0.5 * d->zoom * WIDTH) + d->x_mo;
			p.new_i = (y - HEIGHT / 2) / (0.5 * d->zoom * HEIGHT) + d->y_mo;
			i = iter_julia(&p, d);
			color = get_color(i, d->max_iter, d->shift);
			d->img_data[y * d->line + x * d->bpp / 8] = color;
			x++;
		}
		y++;
	}
}
