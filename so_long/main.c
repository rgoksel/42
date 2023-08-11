/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:16:09 by rdemiray          #+#    #+#             */
/*   Updated: 2023/08/11 22:12:58 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		t_data *data;
		data = malloc(sizeof(t_data));
		data->player_step = 0;
		data->collectable_count_copy = 0;
		data->collectable_count = 0;
		get_map(data, argv[1]);
		invalid_mapname(argv[1], data);
		is_rectangular(data);
		wall_okk(data);
		element_check(data);
		another_coin(data);
		
		data->mlx = mlx_init();
		data->player_collected = 0;
		find_player(data, 'P');
		data->mlx_win = mlx_new_window(data->mlx, (data->map_x) * 64, (data->map_y)*64, "Hello World!");
		image_initilize(data);
		image_to_screen(data);
		//ft_score(data);
		mlx_hook(data->mlx_win, 17, 0L, &ft_close_window, data);
		mlx_hook(data->mlx_win, 2, 0, handle_key_press, data);
		mlx_loop(data->mlx);
		system("leaks a.out");
		//fflush(stdout);
	}
	else
		perror("arguman number is invalid");
}
