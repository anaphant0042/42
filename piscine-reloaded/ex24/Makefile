CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC_DIR := ./srcs
OBJS = $(wildcard *.o)
FUNCTIONS := $(wildcard *.c)
# ft_putchar, ft_putstr, ft_strcmp, ft_strlen, ft_swap

all: libft.a

libft.a: $(FUNCTIONS)
	$(CC) -o libft.a $(FUNCTIONS) $(CFLAGS)

clean:
	rm all

fclean:
	make clean
	rm -f $(OBJECTS)

re:
	make fclean
	make all
