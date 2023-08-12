/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:03:52 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/12 19:11:21 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	is_rectangular(t_data *data)
{
	int	i;
	int	line1_len;
	int	lenght;

	lenght = 0;
	i = 1;
	line1_len = ft_strlen(data->map[0]);
	data->map_x = line1_len;
	while (data->map[i])
	{
		lenght = ft_strlen(data->map[i]);
		if (lenght != line1_len)
			ft_error("the map is not rectangular!!", data);
		i++;
	}
	data->map_y = i;
}

void	invalid_mapname(char *mapname, t_data *data)
{
	int	lenght;

	lenght = ft_strlen(mapname);
	if (mapname[lenght - 1] != 'r' || mapname[lenght - 2] != 'e' \
			|| mapname[lenght - 3] != 'b' || mapname[lenght - 4] != '.' \
			|| lenght < 5)
		ft_error("map name is invalid! it should end with .ber!", data);
}

void	element_check(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'C')
				data->collectable_count ++;
			if (data->map[i][j] == 'P')
				data->player_len ++;
			if (data->map[i][j] == 'E')
				data->exit_len ++;
			if (data->map[i][j] != 'C' && data->map[i][j] != 'P' \
				&& data->map[i][j] != '0' && data->map[i][j] != '1' \
				&& data->map[i][j] != 'E')
				ft_error("there is some invalid characters in the map", data);
			j++;
		}
		i++;
	}
}

void	count_problems(t_data *data)
{
	element_check(data);
	if ((data->collectable_count < 1) || (data->player_len != 1) \
		|| (data->exit_len != 1))
		ft_error("there should be 1player, 1exit and at least 1collectable", \
		data);
}

void	wall_okk(t_data *data)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < data->map_x)
	{
		if (data->map[0][x] != '1' || data->map[data->map_y - 1][x] != '1')
			ft_error("map is not surrounded by walls", data);
		x++;
	}
	while (y < data->map_y)
	{
		if (data->map[y][0] != '1' || data->map[y][data->map_x - 1] != '1')
			ft_error("map is not surrounded by walls", data);
		y++;
	}
}
