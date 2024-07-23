# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yyasser <yyasser@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/22 15:01:43 by yyasser           #+#    #+#              #
#    Updated: 2024/07/22 15:36:59 by yyasser          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Library name
NAME = libft.a

# Source files
SRCS =  ft_bzero.c ft_memset.c ft_putnbr_fd.c ft_strchr.c ft_strjoin.c  ft_strtrim.c  ft_isalpha.c ft_isprint.c ft_memmove.c ft_strnstr.c \
		ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c ft_strdup.c ft_strlen.c ft_substr.c ft_isascii.c ft_strlcat.c ft_atoi.c \
		ft_itoa.c  ft_putendl_fd.c ft_split.c ft_striteri.c  ft_strmapi.c  ft_isalnum.c  ft_isdigit.c ft_memcpy.c ft_strlcpy.c

# Object files
OBJS = $(SRCS:.c=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Phony targets
.PHONY: all clean fclean re
