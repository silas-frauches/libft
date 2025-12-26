# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sida-sil <sida-sil@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 06:16:53 by sida-sil          #+#    #+#              #
#    Updated: 2025/10/29 06:17:11 by sida-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -I -Wall -Wextra -Werror
CC = cc
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
    ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c\
    ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
    ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c\
    ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c\
    ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c\
    ft_strrchr.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_substr.c
OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_SRCS:.c=.o}
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
    ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 

.c.o:
	${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus: ${BONUS_OBJS}
	ar rcs ${NAME} ${BONUS_OBJS}

all: ${NAME} bonus

clean:
	rm -rf *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re test
