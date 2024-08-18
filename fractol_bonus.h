/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:58:09 by sishizaw          #+#    #+#             */
/*   Updated: 2024/08/18 19:09:33 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_BONUS_H
# define FRACTOL_BONUS_H

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
	int		shift;
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

typedef struct s_burn_p
{
	double	pr;
	double	pi;
	double	new_r;
	double	new_i;
	double	old_r;
	double	old_i;
}	t_burn;

void	draw_fractal(t_data *d);
void	events(t_data *d);
void	draw_mandelbrot(t_data *d);
void	draw_julia(t_data *d);
void	draw_burningship(t_data *d);
int		get_color(int iteration, int max_iter, int shift);

#endif