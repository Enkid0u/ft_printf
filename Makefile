# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 12:29:17 by rrebois           #+#    #+#              #
#    Updated: 2022/11/25 17:07:57 by rrebois          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

RM = rm -f

FLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_convert_address.c ft_putnbr.c ft_convert_nbr.c ft_putnbr_unsigned.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c $(HEADER) Makefile
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
