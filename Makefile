# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 13:39:37 by jopires-          #+#    #+#              #
#    Updated: 2024/11/09 18:07:08 by jopires-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc	
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_memset.c ft_strcat.c \
	ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c \
	ft_toupper.c ft_bzero.c ft_memcpy.c ft_memmove.c\
	ft_memmove.c ft_strlcat.c ft_strchr.c  ft_strrchr.c\
	ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strdup.c\
	ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c\
	ft_split.c	ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f  $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all