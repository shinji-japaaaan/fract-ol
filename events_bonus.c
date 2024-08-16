/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:26:15 by sishizaw          #+#    #+#             */
/*   Updated: 2024/08/17 08:03:27 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

void update_shift(t_data *d)
{
    d->shift = (d->shift + 1) % 256;
}

int handle_key(int keycode, t_data *d)
{
    if (keycode == 65307) // ESCキー
        exit(0);
    else if (keycode == 65361) // 左矢印キー
        d->x_mo -= 0.1 / d->zoom;
    else if (keycode == 65363) // 右矢印キー
        d->x_mo += 0.1 / d->zoom;
    else if (keycode == 65362) // 上矢印キー
        d->y_mo -= 0.1 / d->zoom;
    else if (keycode == 65364) // 下矢印キー
        d->y_mo += 0.1 / d->zoom;
    else if (keycode == 99) // 'c'キーで色のシフト
        update_shift(d);
    draw_fractal(d);
    return (0);
}

int handle_mouse(int button, int x, int y, t_data *d)
{
    double mouse_re, mouse_im;
    double new_zoom;

    mouse_re = (x - WIDTH / 2) / (0.5 * d->zoom * WIDTH) + d->x_mo;
    mouse_im = (y - HEIGHT / 2) / (0.5 * d->zoom * HEIGHT) + d->y_mo;

    if (button == 4)
        new_zoom = d->zoom * 1.1;
    else if (button == 5)
        new_zoom = d->zoom / 1.1;
    else
        return (0);
    d->x_mo = mouse_re - (x - WIDTH / 2) / (0.5 * new_zoom * WIDTH);
    d->y_mo = mouse_im - (y - HEIGHT / 2) / (0.5 * new_zoom * HEIGHT);
    d->zoom = new_zoom;
    draw_fractal(d);
    return (0);
}

int close_window(t_data *d)
{
    (void)d;
    exit(0);
}

void events(t_data *d)
{
    mlx_key_hook(d->win_ptr, handle_key, d);
    mlx_mouse_hook(d->win_ptr, handle_mouse, d);
    mlx_hook(d->win_ptr, 17, 0, close_window, d);
    mlx_loop(d->mlx_ptr);
}

