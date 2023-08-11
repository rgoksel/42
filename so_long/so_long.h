/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:06:03 by rdemiray          #+#    #+#             */
/*   Updated: 2023/08/11 22:04:54 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H 

#include "minilibx/mlx.h"
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

#define PL_XPM "./images/char.xpm"
#define EX_XPM "./images/exit.xpm"
#define C_XPM "./images/coin.xpm"
#define WALL_XPM "./images/white.xpm"
#define	G_XPM "./images/ground.xpm"

typedef struct s_data
{
	void 	*mlx;
	void	*mlx_win;
	void	*player; //P
	void	*exit; //E
	void	*wall; //1
	void	*collectable; //C
	void	*background; //0
	int		map_x;
	int		map_y;
	char	**map; //orjinal map
	char	**copy_map;
	int		collectable_count;
	int		collectable_count_copy;
	int		exit_valid;
	int		player_collected;
	int 	img_x;
	int		img_y;
	int		player_len;
	int		exit_len;
	int		player_x;
	int		player_y;
	int		exit_x;
	int		exit_y;
	int		player_step;
	char	*player_step_screen;
}	t_data;

void	image_to_screen(t_data *data);
int 	handle_key_press(int keycode, t_data *data);
void	get_map(t_data *data, char *map_name);
char	*get_next_line(int fd);
void	step_counter(t_data *data);
int		ft_strlen(char *string);
char	*ft_strdup(char *s1);
char	**ft_split(const char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
void	element_check(t_data *data);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int 	find_player(t_data *data, char find);
void	is_rectangular(t_data *data);
void	image_to_screen(t_data *data);
void 	image_initilize(t_data *data);
void	ft_error(char *msg, t_data *data);
void	ft_free(t_data *data);
char	*ft_itoa(int n);
void	invalid_mapname(char *mapname, t_data *data);
void	wall_okk(t_data *data);
int		another_coin(t_data *data);
int		ft_close_window(t_data *data);
void	ft_score(t_data *data);

#endif
