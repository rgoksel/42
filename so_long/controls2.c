/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:30:04 by rdemiray          #+#    #+#             */
/*   Updated: 2023/08/11 20:30:12 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int find_player(t_data *data, char find)
{
	int i;
	int j;
	
	i = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == 'P')
			{
				data->player_x = j;
				data->player_y = i;
			}
			if (data->map[i][j] == 'E')
			{
				data->exit_x = j;
				data->exit_y = i;
			}
		else if(data->copy_map[i][j] == find || data->copy_map[i][j] == find)
			return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void unvalid_map(t_data *data, int x, int y)
{
	int i;
	
	if (data->copy_map[x][y] == 'E')
	{
		data->exit_valid = 1;
		data->copy_map[x][y] = '1';
	}
	if (data->copy_map[x][y] == 'C')
	{	
		data->collectable_count_copy += 1;
		data->copy_map[x][y] = '0';
	}
	if (data->copy_map[x][y] == '0' ||  data->copy_map[x][y] == 'P')
	{
		data->copy_map[x][y] = '.';
		unvalid_map(data, x, y+1);
		unvalid_map(data, x, y-1);
		unvalid_map(data, x+1, y);
		unvalid_map(data, x-1, y);
	}
	return;
}

int another_coin(t_data *data)
{
	find_player(data, 'P');
	unvalid_map(data, data->player_x, data->player_y);
	if (data->collectable_count_copy != data->collectable_count)
		ft_error("Yiyeceğe ulaşamadık!", data);
	if (!data->exit_valid)
		ft_error("Çıkışa ulaşamadık!", data);
	if(find_player(data, 'C') || find_player(data, 'E'))
		return (1);
	return (0);
}
