OBJS := $(patsubst %.c, %.o, $(wildcard *.c))
NAME := ft_display_file
CFLAGS = -Wall -Werror -Wextra
CC = cc

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)
