# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joolibar <joolibar@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/09 18:03:39 by joolibar          #+#    #+#              #
#    Updated: 2024/04/09 18:51:03 by alara-gu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = *.c

INCLUDE = header.h

OBJS := $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
.PHONY: all clean fclean 
