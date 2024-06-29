/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:21:10 by sishizaw              #+#    #+#             */
/*   Updated: 2024/06/28 20:21:10 by sishizaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int main(int argc, char **argv)
{
    t_data data;

    // コマンドライン引数のチェックとフラクタルの種類の設定
    if (argc != 2 || (ft_strncmp(argv[1], "mandelbrot", 10) != 0 && ft_strncmp(argv[1], "julia", 5) != 0)) {
        write(1, "Usage: ./fractol <mandelbrot/julia>\n", 36);
        return (1);
    }

    // MiniLibXの初期化とウィンドウの作成
    data.mlx_ptr = mlx_init();
    data.win_ptr = mlx_new_window(data.mlx_ptr, WIN_WIDTH, WIN_HEIGHT, "Fractol");
    data.img_ptr = mlx_new_image(data.mlx_ptr, WIN_WIDTH, WIN_HEIGHT);
    data.img_data = mlx_get_data_addr(data.img_ptr, &data.bpp, &data.size_line, &data.endian);
    data.zoom = 1.0;
    data.x_offset = 0.0;
    data.y_offset = 0.0;
    data.max_iter = 50;
    data.is_active = 1; // ウィンドウがアクティブかどうか

    // フラクタルの種類によって描画関数を呼び出す
    if (ft_strncmp(argv[1], "mandelbrot", 10) == 0)
        draw_mandelbrot(&data);
    else if (ft_strncmp(argv[1], "julia", 5) == 0)
        draw_julia(&data, -0.7, 0.27015); // ジュリア集合のパラメータは変更可能

    // ウィンドウイベントのフック
    mlx_key_hook(data.win_ptr, handle_key, &data); // キーボードイベント
    mlx_mouse_hook(data.win_ptr, handle_mouse, &data); // マウスイベント
    mlx_hook(data.win_ptr, 5, 0, handle_focus_in, &data); // ウィンドウフォーカスイン
    mlx_hook(data.win_ptr, 6, 0, handle_focus_out, &data); // ウィンドウフォーカスアウト
    mlx_hook(data.win_ptr, 17, 0, close_window, &data); // ウィンドウクローズ
    mlx_hook(data.win_ptr, 12, 0, expose_hook, &data); // ウィンドウ再描画

    // メインループ
    mlx_loop(data.mlx_ptr);

    return (0);
}


