CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a

HEADERS = $(shell find -type f -name "*.h")
FUNCTIONS = $(shell find -type f -name "*.c")
OBJS = $(FUNCITONS:%.c=%.o)

all: $(NAME) 

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

%.o: %.c $(HEADERS) 
	$(CC) -c $(CFLAGS) $< -I$(HEADERS) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
