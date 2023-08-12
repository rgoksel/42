/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:03:36 by mogullar          #+#    #+#             */
/*   Updated: 2023/08/12 22:38:05 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	ft_coordinat(int x, int y, t_data *data)
{
	if (data->map[y][x] == 'C')
		data->player_collected++;
	else if (data->map[y][x] == 'D')
	{
		write(1, "you lose!!", 9);
		system("leaks so_long");
		exit(1);
		return (0);
	}
	else if (data->map[y][x] == 'E')
	{
		if (data->player_collected == data->collectable_count)
		{
			write(1, "you win!!", 9);
			system("leaks so_long");
			exit(1);
		}
		return (0); 
	}
	else if (data->map[y][x] == '1')
		return (0);
	return (1);
}

void	step_counter(t_data *data)
{
	int		i;
	char	*str;

	i = 0;
	data->player_step++;
	str = ft_itoa(data->player_step);
	write(1, "STEP: ", 7);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	free(str);
}

void	put_score(t_data *data)
{
	char	*score;

	score = ft_itoa(data->player_step);
	mlx_string_put(data->mlx, data->mlx_win, 100, 100, 0xFFCBDB, "step: ");
	mlx_string_put(data->mlx, data->mlx_win, 100, 130, 0xFFCBDB, score);
	free(score);
}
