/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burningship_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 08:18:40 by sishizaw          #+#    #+#             */
/*   Updated: 2024/08/24 09:49:05 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

static int	iter_burning(t_burn *p, int max_iter)
{
	int	i;

	p->new_r = 0;
	p->new_i = 0;
	p->old_r = 0;
	p->old_i = 0;
	i = 0;
	while (i < max_iter)
	{
		p->old_r = p->new_r;
		p->old_i = p->new_i;
		p->new_r = fabs(p->old_r * p->old_r - p->old_i * p->old_i + p->pr);
		p->new_i = fabs(2 * p->old_r * p->old_i + p->pi);
		if ((p->new_r * p->new_r + p->new_i * p->new_i) > 4)
			break ;
		i++;
	}
	return (i);
}

void	draw_burningship(t_data *d)
{
	int		x;
	int		y;
	int		i;
	int		color;
	t_burn	p;

	y = 0;
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			p.pr = 1.5 * (x - WIDTH / 2) / (0.5 * d->zoom * WIDTH) + d->x_mo;
			p.pi = (y - HEIGHT / 2) / (0.5 * d->zoom * HEIGHT) + d->y_mo;
			i = iter_burning(&p, d->max_iter);
			color = get_color(i, d->max_iter, d->shift);
			d->img_data[y * d->line + x * d->bpp / 8] = color;
			x++;
		}
		y++;
	}
}
