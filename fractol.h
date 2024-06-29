/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:22:27 by sishizaw              #+#    #+#             */
/*   Updated: 2024/06/28 20:22:27 by sishizaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
#define FRACTOL_H

#include "minilibx-linux/mlx.h"
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include "libft/libft.h"

// ウィンドウの幅と高さ
#define WIN_WIDTH 800
#define WIN_HEIGHT 600

// 構造体の定義
typedef struct s_data {
    void    *mlx_ptr;
    void    *win_ptr;
    void    *img_ptr;
    char    *img_data;
    int     bpp;
    int     size_line;
    int     endian;
    double  zoom;
    double  x_offset;
    double  y_offset;
    int     max_iter;
    int     fractal_type; // フラクタルの種類: 0 = Mandelbrot, 1 = Julia
    double  c_re; // ジュリア集合の実数部分
    double  c_im; // ジュリア集合の虚数部分
    int     is_active; // ウィンドウがアクティブかどうか
} t_data;

// プロトタイプ宣言
void    draw_fractal(t_data *data);
void    draw_mandelbrot(t_data *data);
void    draw_julia(t_data *data, double c_re, double c_im);
int     handle_key(int keycode, t_data *data);
int     handle_mouse(int button, int x, int y, t_data *data);
int     close_window(t_data *data);
int     handle_focus_in(int keycode, t_data *data);
int     handle_focus_out(int keycode, t_data *data);
int     expose_hook(t_data *data);

#endif
