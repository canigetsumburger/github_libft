
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kebakal <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/19 11:55:26 by kebakal           #+#    #+#              #
#    Updated: 2026/10/19 11:55:26 by kebakal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wall -Wextra -g
SRC = ft_atoi.c     ft_isascii.c  ft_memcmp.c   ft_strdup.c	ft_strncmp.c  ft_toupper.c \
ft_bzero.c    ft_isdigit.c  ft_memcpy.c   ft_strjoin.c	ft_strnstr.c \
ft_calloc.c   ft_isprint.c  ft_memmove.c  ft_strlcat.c	ft_strrchr.c \
ft_isalnum.c  ft_itoa.c     ft_memset.c   ft_strlcpy.c	ft_isalpha.c \
ft_memchr.c   ft_strchr.c   ft_strlen.c	ft_tolower.c  ft_substr.c \
ft_strtrim.c	ft_split.c	main.c

OBJECTS = $(SRC:%.c=%.o)
NAME = libft.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs	$(NAME) -c $(OBJECTS)

%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJECTS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
