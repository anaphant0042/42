CFLAGS = -Wall -Werror -Wextra
SRC_DIR := ./srcs
OBJS = $(wildcard *.o)
FUNCTIONS := $(wildcard *.c)
HEADERS := ./includes
# ft_putchar, ft_putstr, ft_strcmp, ft_strlen, ft_swap

all: libft.a $(OBJS)

libft.a: $(OBJS)
	ar -o libft.a $@ $(CFLAGS)

$(OBJS): $(SRC_DIR)/$(FUNCTIONS)
	cc -o $@.o $(HEADDERS)

clean:
	rm all

fclean:
	make clean
	rm -f $(OBJECTS)

re:
	make fclean
	make all
