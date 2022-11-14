# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sara <sara@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/26 19:24:06 by sara              #+#    #+#              #
#    Updated: 2022/11/14 17:27:17 by sara             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
						ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
						ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_memcpy.c\
						ft_putchar_fd.c ft_putstr_fd.c ft_strrchr.c ft_tolower.c ft_toupper.c \

OBJS			= $(SRCS:.c=.o)

CC					= gcc
RM					= /bin/rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
						ar rcs $(NAME) $(OBJS)

clean:
						$(RM) $(OBJS)

fclean:			clean
						$(RM) $(NAME)

re:						fclean $(NAME)

.PHONY:			all clean fclean re