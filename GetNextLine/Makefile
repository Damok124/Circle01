# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 17:12:24 by zharzi            #+#    #+#              #
#    Updated: 2022/07/14 22:31:33 by zharzi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libdispfile.a

BINARY = ft_display_file

SRCSDIR = ./srcs/

SRCS = $(SRCSDIR)ft_display_file.c

HEADERDIR = includes/

HEADER = ft_files.h

OBJ = $(SRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

IFLAG = -I$(HEADERDIR)

all : libdispfile.a
	$(CC) $(FLAGS) main.c $(IFLAG) -L. -ldispfile -o $(BINARY)

%.o : %.c
	$(CC) $(FLAGS) $(IFLAG) -o $@ -c $^

libdispfile.a : $(OBJ) $(HEADERDIR)$(HEADER)
	ar -rcs $(NAME) $^

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)
	rm -f $(BINARY)

re : fclean all

.PHONY : all clean fclean re
