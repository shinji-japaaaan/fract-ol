/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:51:00 by sishizaw          #+#    #+#             */
/*   Updated: 2024/08/18 19:09:53 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "minilibx-linux/mlx.h"
# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include "libft/libft.h"

# define WIDTH 800
# define HEIGHT 600

typedef struct s_data {
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_ptr;
	char	*img_data;
	int		bpp;
	int		line;
	int		endian;
	double	zoom;
	double	x_mo;
	double	y_mo;
	int		max_iter;
	int		fractal_type;
	double	cr;
	double	ci;
}	t_data;

typedef struct s_mandel_p
{
	double	pr;
	double	pi;
	double	new_r;
	double	new_i;
	double	old_r;
	double	old_i;
}	t_mandel;

typedef struct s_julia_p
{
	double	new_r;
	double	new_i;
	double	old_r;
	double	old_i;
}	t_julia;

void	draw_fractal(t_data *d);
int		handle_key(int keycode, t_data *d);
int		handle_mouse(int button, int x, int y, t_data *d);
int		close_window(t_data *d);
void	draw_mandelbrot(t_data *d);
void	draw_julia(t_data *d);

#endif