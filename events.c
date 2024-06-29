/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:46:27 by sishizaw              #+#    #+#             */
/*   Updated: 2024/06/29 09:46:27 by sishizaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int handle_key(int keycode, t_data *data)
{
    (void)data;
    if (keycode == 65307) // ESCキー
        exit(0);
    return (0);
}

int handle_mouse(int button, int x, int y, t_data *data)
{
    (void)x;
    (void)y;
    (void)data;
    if (button == 4) // マウスホイール上
        data->zoom *= 1.1;
    else if (button == 5) // マウスホイール下
        data->zoom /= 1.1;

    draw_fractal(data);
    mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->img_ptr, 0, 0);
    return (0);
}

int close_window(t_data *data)
{
    (void)data;
    exit(0);
}
