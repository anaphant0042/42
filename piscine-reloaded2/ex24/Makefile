CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
H_DIR = includes
HEADERS = $(shell find $(H_DIR) -type f -name "*.h")
FUNCTIONS = ./srcs/ft_putchar.c, srcs/ft_putstr.c, srcs/ft_strcmp.c, srcs/ft_strlen.c, srcs/ft_swap.c
OBJS = $(FUNCTIONS:%.c=%.o) 

all: $(NAME) 

$(NAME):
	$(CC) $(CFLAGS) -c $(FUNCTIONS) -I $(HEADERS) 
	ar rcs $(NAME) $(OBJS) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
