# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 13:24:03 by smlamali          #+#    #+#              #
#    Updated: 2023/02/11 17:28:21 by smlamali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	maps.c	\
			
OBJS = $(SRCS:.c=.o)

CC = clang

CFLAGS = -Wall -Wextra -Werror

NAME = so_long

all: $(NAME)

.o.c:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -lX11 -lXext -Lminilibx-linux -lmlx -Llibft -lft -o $(NAME) 

clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all