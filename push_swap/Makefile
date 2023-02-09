# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 14:38:37 by smlamali          #+#    #+#              #
#    Updated: 2023/02/01 15:15:52 by smlamali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=	lc.c 		/
		lc_utils.c 	/

OBJS=	$(SRCS:.c=.o)

CLFAGS= -Wall -Wextra -Werror

NAME= push_swap

all: $(NAME)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	cc $(OBJ) $(NAME)
	
clean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re