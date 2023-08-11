/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 21:39:45 by rdemiray          #+#    #+#             */
/*   Updated: 2023/08/11 22:27:27 by rdemiray         ###   ########.fr       */
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
			|| mapname[lenght - 3] != 'b' || mapname[lenght - 4] != '.' || lenght < 5)
		ft_error("map name is invalid! it should end with .ber!", data);
}

void	element_check(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	data->player_len = 0;
	data->collectable_count = 0;
	data->exit_len = 0;
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
			if(data->map[i][j] != 'C' && data->map[i][j] != 'P' && data->map[i][j] != '0' && data->map[i][j] != '1' && data->map[i][j] != 'E')
				ft_error("there is some invalid characters in the map", data);
			j++;
		}
		i++;
	}
	if ((data->collectable_count < 1) || (data->player_len != 1) || (data->exit_len != 1))
		ft_error("Error: there should be just 1player, 1exit and at least 1collectable", data);
}

void	wall_okk(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (data->map[i])
	{
		while (i == 0 || i == (data->map_y -1))
		{
			j = 0;
			while (j <= (data->map_x -1))
			{
				printf("a");
				if (data->map[0][j] != '1' || data->map[0][j])
					ft_error("map is not surrended by 1", data);
				j++;	
			}
		}
		if (data->map[i][0] != '1' || data->map[i][(data->map_x) - 1] != '1')
			ft_error("map is not surrended by 1!!", data);
		i++;
	}
}


