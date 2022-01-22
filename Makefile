# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 16:58:02 by ekutlay           #+#    #+#              #
#    Updated: 2022/01/22 03:52:28 by ekutlay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = clang
FLAGS = -Wall -Wextra -Werror
SOURCE = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		 ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c \
		 ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		 ft_memcmp.c ft_atoi.c ft_strdup.c ft_strnstr.c ft_calloc.c ft_substr.c \
		 ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c  \
		 ft_putendl_fd.c ft_strmapi.c ft_split.c ft_striteri.c ft_itoa.c \


OBJ = $(SOURCE:.c=.o)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re main bonus

main: main.c $(OBJ) $(NAME)
	$(CC) -lbsd $(FLAGS) main.c $(NAME) -o main
	./main
