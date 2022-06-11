# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 17:34:45 by zharzi            #+#    #+#              #
#    Updated: 2022/05/26 17:16:57 by zharzi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCM		= ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
ft_strlen.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_strnstr.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_itoa.c \
ft_strmapi.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putnbr_base_fd.c \
ft_striteri.c \
ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra -g

OBJM		= $(SRCM:.c=.o)

OBJB		= $(SRCB:.c=.o)

all: $(NAME)

so:
			$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCM)
			gcc -nostartfiles -shared -o libft.so $(OBJM)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJM)
			ar rcs $(NAME) $(OBJM)

bonus:		$(OBJB)
			ar rcs $(NAME) $(OBJB)

clean:
	rm -rf *.o

fclean:	clean
	rm -rf $(NAME)

re: fclean all

reb: fclean bonus

.PHONY:	all bonus clean fclean re debug so .c.o

debug:
	$(CC) -g3 $(SRCM)
