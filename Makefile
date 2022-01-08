# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 16:58:02 by ekutlay           #+#    #+#              #
#    Updated: 2022/01/08 18:06:38 by ekutlay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_bzero \
		ft_isalnum \
		ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_isprint \
		ft_memcpy \
		ft_memmove \
		ft_memset \
		ft_strchr \
		#ft_strlcat#
		#ft_strlcpy#
		ft_strlen \
		ft_strncmp \
		ft_strrchr \
		ft_tolower \
		ft_toupper \


SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
