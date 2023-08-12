/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:30:45 by rdemiray          #+#    #+#             */
/*   Updated: 2023/08/12 22:47:04 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_putstr(char *str)
{
	int	i ;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_exit(char *msg)
{
	write(1, "Error\n", 6);
	ft_putstr(msg);
	system("leaks so_long");
	exit(EXIT_FAILURE);
}

void	ft_error(char *msg, t_data *data)
{
	write(1, "Error\n", 6);
	ft_putstr(msg);
	ft_free(data);
	system("leaks so_long");
	exit(EXIT_FAILURE);
}

int	ft_close_window(t_data *data)
{
	ft_free(data);
	system("leaks so_long");
	exit(EXIT_SUCCESS);
	return (0);
}
void free_arr(char **str)
{
	int	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	ft_free(t_data *data)
{
	free_arr(data->map);
	free_arr(data->copy_map);
	free(data);
}


