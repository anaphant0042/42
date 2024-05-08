# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alara-gu <alara-gu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/07 23:19:46 by alara-gu          #+#    #+#              #
#    Updated: 2024/04/07 23:20:29 by alara-gu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRCS = rush-02.c  src/*.c 

CC = cc

FLAGS = -Wall -Werror -Wextra 

all:	${NAME}

${NAME}: ${SRCS}
	${CC} $(FLAGS) -o $(NAME) $(SRCS) -I./src

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
