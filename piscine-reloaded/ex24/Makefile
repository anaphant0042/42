CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC_DIR := ./srcs
HEADERS_DIR := ./includes
HEADERS := $(HEADERS_DIR)/$(wildcard *.h)
OBJS := $(SRC_DIR)/$(patsubst %.c, %.o. $(wildcarc *c))
FUNCTIONS := $(SRC_DIR)/$(wildcard *.c)
# ft_putchar, ft_putstr, ft_strcmp, ft_strlen, ft_swap

all: $(NAME) 

$(NAME): $(OBJS)
	ar cr $(NAME) $(OBJS) 

$(OBJS): $(FUNCTIONS)
	$(CC) $@ $(FUNCTIONS) $(CFLAGS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re:
	make fclean
	make all
