NAME = libftprintf.a
SRC =
BSRC =

OBJ = $(SRC:.c=.o)
BOBJ = $(BSRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar -r $@ $?

bonus: $(OBJ) $(BOBJ)
	ar -r $(NAME) $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
