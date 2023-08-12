/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:04:07 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/12 21:13:44 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_map(t_data *data, char *map)
{
	get_map(data, map);
	invalid_mapname(map, data);
	is_rectangular(data);
	wall_okk(data);
	element_check(data);
	another_coin(data);
}

void	ft_win_and_hook(t_data *data)
{
	data->mlx = mlx_init();
	find_player(data, 'P');
	data->mlx_win = mlx_new_window(data->mlx, (data->map_x) * 64, \
		(data->map_y) * 64, "So Long");
	image_initilize(data);
	image_to_screen_c01(data);
	image_to_screen_ped(data);
	mlx_hook(data->mlx_win, 17, 0L, &ft_close_window, data);
	mlx_hook(data->mlx_win, 2, 0, handle_key_press, data);
	mlx_loop(data->mlx);
}

int	main(int ac, char **av)
{
	t_data	*data;

	if (ac == 2)
	{
		data = malloc(sizeof(t_data));
		data->player_step = 0;
		data->collectable_count_copy = 0;
		data->collectable_count = 0;
		data->player_collected = 0;
		data->player_len = 0;
		data->exit_len = 0;
		ft_map(data, av[1]);
		ft_win_and_hook(data);
	}
	else
		ft_exit("Invalid argument count");
}
