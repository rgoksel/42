NAME 		= so_long

NAME_BN		= so_long_bonus

SRCS 		= controls.c controls2.c create_map.c free.c get_map.c get_next_line.c utils.c utils2.c main.c move.c move1.c

SRCS_BONUS  = bonus/controls_bonus.c bonus/controls2_bonus.c bonus/create_map_bonus.c bonus/free_bonus.c bonus/get_map_bonus.c bonus/get_next_line_bonus.c bonus/utils_bonus.c bonus/utils2_bonus.c bonus/main_bonus.c bonus/move_bonus.c bonus/move1_bonus.c

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror -I include

OBJS		= $(SRCS:%.c=%.o)

OBJS_BN		= $(SRCS_BONUS:%.c=%.o)

$(NAME):	$(OBJS)
			make -C ./minilibx
			mv ./minilibx/libmlx.a ./libmlx.a
			$(CC) $(CFLAGS) $(SRCS) -framework OpenGL -framework AppKit libmlx.a -o $(NAME)
			
$(NAME_BN):	$(OBJS_BN)
			make -C ./minilibx
			mv ./minilibx/libmlx.a ./libmlx.a
			$(CC) $(CFLAGS) $(SRCS_BONUS) -framework OpenGL -framework AppKit libmlx.a -o $(NAME_BN)

all: 		$(NAME)

bonus:		$(NAME_BN)

clean:
			make -C ./minilibx clean
			rm -rf ./*.o bonus/*.o libmlx.a so_long.o so_long_bonus.o

fclean: 	clean
			rm -rf so_long so_long_bonus

re: 		fclean all

.PHONY: 	all clean fclean re