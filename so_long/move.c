/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:49:21 by rdemiray          #+#    #+#             */
/*   Updated: 2023/08/11 21:57:00 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char ft_coordinat(int x, int y, t_data *data)
{
	if (data->map[y][x] == 'C')
	{
		data->player_collected++;
	}
	else if (data->map[y][x] == 'E')
	{
		if(data->player_collected == data->collectable_count)
			exit(1);

		return(0); 
	}	
	else if (data->map[y][x] == '1')
		return (0);
	return (1);
}


int handle_key_press(int keycode, t_data *data)
{
	int x;
	int y;
	x = data->player_x;
	y = data->player_y;
	if (keycode == 53)
		exit(0);
    if (keycode == 2 && ft_coordinat(x + 1, y, data))
    {
        data->map[y][x] = '0';
        data->map[y][x + 1] = 'P';
		data->player_x = x + 1;
		step_counter(data);

    }
    else if (keycode == 0 && ft_coordinat(x - 1, y, data))
    {
        data->map[y][x] = '0';
        data->map[y][x - 1] = 'P';
		data->player_x = x - 1;
		step_counter(data);

    }
    else if (keycode == 1 && ft_coordinat(x, y + 1, data))
    {
        data->map[y][x] = '0';
        data->map[y + 1][x] = 'P';
		data->player_y = y + 1;
		step_counter(data);

    }
    else if (keycode == 13 && ft_coordinat(x, y - 1, data))
    {
        data->map[y][x] = '0';
        data->map[y - 1][x] = 'P';
		data->player_y = y - 1;
		step_counter(data);
    }
	image_to_screen(data);
	return 0;
}

void step_counter(t_data *data)
{
    int i;
    i = 0;
    data->player_step++;
    char *str = ft_itoa(data->player_step);
    write(1, "STEP: ", 7);
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
	ft_score(data);
    write(1, "\n", 1);
    free(str);
}

void	ft_score(t_data *data)
{
	int i;
	
	i = 1;
	data->player_step_screen = ft_itoa(data->player_step);
	mlx_string_put(data->mlx, data->mlx_win, 30, 30, 0xFFFFFF, "Step: ");
	mlx_string_put(data->mlx, data->mlx_win, 70, 30, 0xFFFFFF, data->player_step_screen);
	if (i)
	{
		mlx_clear_window(data->mlx, data->mlx_win);
		i = 0;
	}
	free(data->player_step_screen);
}