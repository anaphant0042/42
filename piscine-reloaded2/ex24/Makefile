NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

INCLUDES_DIR = includes
SRCS_DIR = srcs

CFILES = $(shell find $(SRCS_DIR)/ -name "*.c")
OFILES = $(CFILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

$(OFILES): $(CFILES)
	$(CC) -c $(CFLAGS) $< -o $@ -I$(INCLUDES_DIR)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY:  all clean fclean re
