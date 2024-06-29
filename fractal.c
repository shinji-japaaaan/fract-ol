/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:45:21 by sishizaw              #+#    #+#             */
/*   Updated: 2024/06/29 09:45:21 by sishizaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void draw_fractal(t_data *data)
{
    // 既存の画像を消去する
    ft_memset(data->img_data, 0, WIN_WIDTH * WIN_HEIGHT * (data->bpp / 8));

    // フラクタルの種類に応じて描画関数を呼び出す
    if (data->fractal_type == 0)
        draw_mandelbrot(data);
    else if (data->fractal_type == 1)
        draw_julia(data, data->c_re, data->c_im);

    // 画像をウィンドウに表示
    mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->img_ptr, 0, 0);
}

void draw_mandelbrot(t_data *data)
{
    int x, y;
    double pr, pi; // 複素数平面上の点
    double new_re, new_im, old_re, old_im;
    int i;

    for (y = 0; y < WIN_HEIGHT; y++) {
        for (x = 0; x < WIN_WIDTH; x++) {
            pr = 1.5 * (x - WIN_WIDTH / 2) / (0.5 * data->zoom * WIN_WIDTH) + data->x_offset;
            pi = (y - WIN_HEIGHT / 2) / (0.5 * data->zoom * WIN_HEIGHT) + data->y_offset;
            new_re = new_im = old_re = old_im = 0;
            i = 0;
            while (i < data->max_iter) {
                old_re = new_re;
                old_im = new_im;
                new_re = old_re * old_re - old_im * old_im + pr;
                new_im = 2 * old_re * old_im + pi;
                if ((new_re * new_re + new_im * new_im) > 4)
                    break;
                i++;
            }
            int color = i * 255 / data->max_iter; // 簡単な色付け
            data->img_data[y * data->size_line + x * data->bpp / 8] = color;
        }
    }
}

void draw_julia(t_data *data, double c_re, double c_im)
{
    int x, y;
    double new_re, new_im, old_re, old_im;
    int i;

    for (y = 0; y < WIN_HEIGHT; y++) {
        for (x = 0; x < WIN_WIDTH; x++) {
            new_re = 1.5 * (x - WIN_WIDTH / 2) / (0.5 * data->zoom * WIN_WIDTH) + data->x_offset;
            new_im = (y - WIN_HEIGHT / 2) / (0.5 * data->zoom * WIN_HEIGHT) + data->y_offset;
            i = 0;
            while (i < data->max_iter) {
                old_re = new_re;
                old_im = new_im;
                new_re = old_re * old_re - old_im * old_im + c_re;
                new_im = 2 * old_re * old_im + c_im;
                if ((new_re * new_re + new_im * new_im) > 4)
                    break;
                i++;
            }
            int color = i * 255 / data->max_iter;
            data->img_data[y * data->size_line + x * data->bpp / 8] = color;
        }
    }
}
