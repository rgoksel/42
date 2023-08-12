/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 22:46:55 by rdemiray          #+#    #+#             */
/*   Updated: 2023/08/12 20:33:20 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	get_map(t_data *data, char *map_name)
{
	static char	*str = NULL;
	static char	*buff = NULL;
	char		*temp;
	int			fd;

	fd = open(map_name, O_RDONLY);
	if (fd == -1)
	{
		ft_error("Error opening file", data);
		exit(1);
	}
	str = get_next_line(fd);
	while (str)
	{
		temp = ft_strjoin(buff, str);
		free(buff);
		buff = temp;
		free(str);
		str = get_next_line(fd);
	}
	close(fd);
	data->map = ft_split(buff, '\n');
	data->copy_map = ft_split(buff, '\n');
	free(buff);
	free(str);
}
