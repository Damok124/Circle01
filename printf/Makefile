# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 16:36:24 by zharzi            #+#    #+#              #
#    Updated: 2022/05/26 19:15:24 by zharzi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS		= ft_printf.c \
ft_strprintf.c \
ft_countnprintf.c

OBJS		= ${SRCS:.c=.o}

FLAGS		= -Wall -Wextra -Werror

RM			= rm -f

LIBFT		= libft.a

DIR			= ./libft/

all:		$(NAME)

.c.o:		${SRCS}
			gcc ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			make -C ${DIR}
			cp ${DIR}${LIBFT} .
			mv ${LIBFT} ${NAME}
			ar rcs ${NAME} ${OBJS}

clean:
			make -C ${DIR} clean
			${RM} ${OBJS}

fclean:		clean
			${RM} ${DIR}${LIBFT}
			${RM} ${NAME}

re:			fclean all

gdb:		all
			gcc -g ${FLAGS} main.c ${NAME}

.PHONY:		all clean fclean re bonus
