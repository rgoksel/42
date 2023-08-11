/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:30:45 by rdemiray          #+#    #+#             */
/*   Updated: 2023/08/11 22:14:43 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(char *msg, t_data *data)
{
	write(1, "Error\n", 6);
	perror(msg);
	ft_free(data);
	exit(EXIT_FAILURE);
}

int	ft_close_window(t_data *data)
{
	ft_free(data);
	exit(EXIT_SUCCESS);
	return (0);
}

void ft_free(t_data *data)
{
	free(data->map);
	free(data->copy_map);
	free(data);
} 