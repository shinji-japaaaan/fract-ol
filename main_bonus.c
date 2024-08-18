/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:58:43 by sishizaw          #+#    #+#             */
/*   Updated: 2024/08/18 19:09:39 by sishizaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol_bonus.h"

void	draw_fractal(t_data *d)
{
	ft_memset(d->img_data, 0, WIDTH * HEIGHT * (d->bpp / 8));
	if (d->fractal_type == 0)
		draw_mandelbrot(d);
	else if (d->fractal_type == 1)
		draw_julia(d);
	else if (d->fractal_type == 2)
		draw_burningship(d);
	mlx_put_image_to_window(d->mlx_ptr, d->win_ptr, d->img_ptr, 0, 0);
}

void	judge_fractal_type(t_data *d, char *fractal_name)
{
	if (ft_strncmp(fractal_name, "mandelbrot", 10) == 0)
		d->fractal_type = 0;
	else if (ft_strncmp(fractal_name, "julia", 5) == 0)
	{
		d->fractal_type = 1;
		d->cr = -1;
		d->ci = 0.28;
	}
	else if (ft_strncmp(fractal_name, "burningship", 11) == 0)
		d->fractal_type = 2;
}

void	set_up_fractal(t_data *d)
{
	d->mlx_ptr = mlx_init();
	d->win_ptr = mlx_new_window(d->mlx_ptr, WIDTH, HEIGHT, "Fractol");
	d->img_ptr = mlx_new_image(d->mlx_ptr, WIDTH, HEIGHT);
	d->img_data = mlx_get_data_addr(d->img_ptr, &d->bpp, &d->line, &d->endian);
	d->zoom = 1.0;
	d->x_mo = 0.0;
	d->y_mo = 0.0;
	d->max_iter = 50;
	d->shift = 0;
}

int	main(int argc, char **argv)
{
	t_data	d;

	if (argc != 2 || (ft_strncmp(argv[1], "mandelbrot", 10) != 0 && \
	ft_strncmp(argv[1], "julia", 5) != 0 && \
	ft_strncmp(argv[1], "burningship", 11) != 0))
	{
		write(1, "Usage: ./fractol <mandelbrot/julia/burningship>\n", 48);
		return (1);
	}
	set_up_fractal(&d);
	judge_fractal_type(&d, argv[1]);
	draw_fractal(&d);
	events(&d);
	return (0);
}
