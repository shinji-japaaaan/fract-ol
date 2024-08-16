# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sishizaw <sishizaw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/14 15:44:49 by sishizaw          #+#    #+#              #
#    Updated: 2024/08/16 21:12:16 by sishizaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
NAME_BONUS = fractol_bonus
CC = cc
CFLAGS = -Wall -Wextra -Werror
MLX = -L minilibx-linux -lmlx -lXext -lX11 -lm
LIBFT = ./libft/libft.a

SRC = main.c events.c mandelbrot.c julia.c
SRC_BONUS = main_bonus.c events_bonus.c \
			mandelbrot_bonus.c julia_bonus.c burningship_bonus.c
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

bonus: $(NAME_BONUS)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(MLX) $(LIBFT)

$(NAME_BONUS): $(OBJ_BONUS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME_BONUS) $(OBJ_BONUS) $(MLX) $(LIBFT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C libft

clean:
	rm -f $(OBJ)  $(OBJ_BONUS)
	make -C libft clean

fclean: clean
	rm -f $(NAME) $(NAME_BONUS) $(LIBFT) 

re: fclean all
