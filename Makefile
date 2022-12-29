# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 11:09:13 by mabdulla          #+#    #+#              #
#    Updated: 2022/10/11 11:07:44 by mabdulla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard ./*c)
OBJS = $(SRCS:.c=.o)

NAME = push_swap
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LIB = ./Libft/libft.a
PTF = ./ft_printf/libftprintf.a



all : $(LIB) $(NAME)

$(LIB) :
	make -C ./ft_printf
	make -C ./Libft
	make bonus -C ./Libft

$(NAME) : $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LIB) $(PTF)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	${RM} ${OBJS}
	make clean -C ./ft_printf
	make clean -C ./Libft

fclean: clean
	${RM} ${NAME}
	make fclean -C ./ft_printf
	make fclean -C ./Libft

re : fclean all

.PHONY: clean fclean re