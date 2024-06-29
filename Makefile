NAME = fractol
CC = cc
CFLAGS = -Wall -Wextra -Werror
MLX = -L minilibx-linux -lmlx -lXext -lX11 -lm
LIBFT = ./libft/libft.a

SRC = main.c fractal.c events.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(MLX) $(LIBFT)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
