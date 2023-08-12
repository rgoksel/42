/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:04:43 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/12 21:13:14 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	image_initilize(t_data *data)
{
	int	img_width;
	int	img_height;

	data->player = mlx_xpm_file_to_image(data->mlx, PL_XPM, &img_width, \
		&img_height);
	data->exit = mlx_xpm_file_to_image(data->mlx, EX_XPM, &img_width, \
		&img_height);
	data->wall = mlx_xpm_file_to_image(data->mlx, WALL_XPM, &img_width, \
		&img_height);
	data->collectable = mlx_xpm_file_to_image(data->mlx, C_XPM, &img_width, \
		&img_height);
	data->background = mlx_xpm_file_to_image(data->mlx, G_XPM, &img_width, \
		&img_height);
	data->dusman = mlx_xpm_file_to_image(data->mlx, D_XPM, &img_width, \
		&img_height);
}

void	image_to_screen_c01(t_data *data)
{
	int	x;
	int	y;

	y = 0;
	while (y <= data->map_y - 1)
	{
		x = 0;
		while (x <= data->map_x - 1)
		{
			if (data->map[y][x] == '1')
				mlx_put_image_to_window(data->mlx, data->mlx_win, \
				data->wall, x * 64, y * 64);
			if (data->map[y][x] == '0')
				mlx_put_image_to_window(data->mlx, data->mlx_win,
					data->background, x * 64, y * 64);
			if (data->map[y][x] == 'C')
				mlx_put_image_to_window(data->mlx, data->mlx_win,
					data->collectable, x * 64, y * 64);
			x++;
		}
		y++;
	}
}

void	image_to_screen_ped(t_data *data)
{
	int	x;
	int	y;

	y = 0;
	while (y <= data->map_y - 1)
	{
		x = 0;
		while (x <= data->map_x - 1)
		{
			if (data->map[y][x] == 'P')
				mlx_put_image_to_window(data->mlx, data->mlx_win, data->player, \
					x * 64, y * 64);
			if (data->map[y][x] == 'E')
				mlx_put_image_to_window(data->mlx, data->mlx_win, data->exit, \
					x * 64, y * 64);
			if (data->map[y][x] == 'D')
				mlx_put_image_to_window(data->mlx, data->mlx_win, \
					data->dusman, x * 64, y * 64);
			x++;
		}
		y++;
	}
}
