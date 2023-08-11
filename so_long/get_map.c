/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 22:46:55 by rdemiray          #+#    #+#             */
/*   Updated: 2023/08/11 17:39:50 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

void get_map(t_data *data, char *map_name)
{
	char	*str = NULL;
	char	*buff = NULL;
	int		fd;

	fd = open(map_name, O_RDONLY , 0777);
	if (fd == -1)
	{
		perror("Error opening file");
	}
	str = get_next_line(fd);
	while (str)
	{
		char *temp = ft_strjoin(buff, str);
		free(buff);
		buff = temp;
		free(str);
		str = get_next_line(fd);
	}
	close(fd);
	
	data->map = ft_split(buff ,'\n');
	data->copy_map = ft_split(buff ,'\n');
	free(buff);
	free(str);
}
