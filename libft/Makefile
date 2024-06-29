# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: root <root@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 15:39:06 by sishizaw          #+#    #+#              #
#    Updated: 2024/06/25 18:17:18 by root             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_strlcpy.c \
       ft_strlcat.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strncmp.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_strnstr.c \
       ft_atoi.c \
       ft_strdup.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_strtrim.c \
	ft_striteri.c \
       ft_split.c \
       ft_itoa.c \
       ft_strmapi.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c
       
NAME     = libft.a
CC       = cc
CFLAGS   = -Wall -Wextra -Werror
RM       = rm -f
AR       = ar r
OBJS     = $(SRCS:%.c=%.o)

B_SRCS   = ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c
              
B_OBJS   = $(B_SRCS:%.c=%.o)

ifeq ($(MAKECMDGOALS), bonus)
	OBJS += $(B_OBJS)
endif

all: $(NAME)

bonus: $(NAME)

$(NAME): $(OBJS)
				$(AR) $(NAME) $(OBJS)

%.o: %.c
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJS) $(B_OBJS)

fclean: clean
				$(RM) $(NAME)

re:	fclean all

.PHONY: all bonus clean fclean re