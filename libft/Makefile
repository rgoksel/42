NAME = libft.a
SOURCES = $(wildcard *.c)
OBJS = $(SOURCES:.c=.o)

all : $(NAME)


$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	
clean : 
	rm -rf $(OBJS)
	
fclean : clean
	rm -rf $(NAME) 
	
re : fclean all

.PHONY : all clean fclean re
