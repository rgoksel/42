NAME = so_long

SRCS = controls.c controls2.c create_map.c free.c get_map.c get_next_line.c utils.c utils2.c main.c move.c

OBJS = $(SRCS:.c=.o)

CC = gcc

MFLAGS = ./minilibx/libmlx.a ./ft_printf/libftprintf.a

AFLAGS =  -Wall -Wextra -Werror -I./mlx -I./libft -I./ft_printf -Imlx -c -Lmlx 

RM = rm -rf

all :$(MFLAGS) $(NAME)

$(MFLAGS):
	make -C ./ft_printf
	make -C ./minilibx

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(MFLAGS) $(AFLAGS) -framework OpenGL -framework AppKit -o $(NAME)

fclean : clean
	make fclean -C ./ft_printf
	$(RM) $(NAME)

clean :
	make clean -C ./ft_printf
	make clean -C ./minilibx
	$(RM) ./src/*.o

re : fclean all

.PHONY : all fclean clean re