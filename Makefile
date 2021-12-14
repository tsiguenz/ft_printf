# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 20:22:47 by tsiguenz          #+#    #+#              #
#    Updated: 2021/12/14 16:15:32 by tsiguenz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_printnbr.c ft_printstr.c
OBJS = ${SRC:.c=.o}
NAME = libftprintf.a
%.o:
	${CC} ${CFLAGS} -c ${SRC}

${NAME}:	${OBJS}
	ar -rcs $@ $^

all:		${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all
.PHONY:	all clean fclean re
