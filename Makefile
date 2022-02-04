# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrenz <nrenz@student.42wolfsburg.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 11:58:00 by nrenz             #+#    #+#              #
#    Updated: 2022/02/04 15:58:30 by nrenz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_print_char.c \
	ft_print_dori.c \
	ft_print_hex.c \
	ft_print_perc.c \
	ft_print_pnt.c \
	ft_print_str.c \
	ft_print_unsnbr.c \
	ft_printf.c \
	ft_unsigned_itoa.c \

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./libft

NAME = libftprintf.a

all: $(NAME)

$(NAME): libft $(OBJS)
	cp ./libft/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJS)

libft:
	make all -C ./libft

clean:
	make clean -C ./libft
	rm -f $(OBJS)

fclean: clean
	make fclean -C ./libft
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re libft