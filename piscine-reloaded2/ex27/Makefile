SRCS = main.c read_file.c 
#SRCS = $(shell find . -name "*.c")
OBJS := $(SRCS:%.c=%.o)
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
