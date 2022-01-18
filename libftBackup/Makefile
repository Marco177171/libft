# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: masebast <masebast@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 09:14:53 by masebast          #+#    #+#              #
#    Updated: 2022/01/15 18:38:12 by masebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = *.c
OBJS = $(SRCS:.c=.o)
HDRS = libft.h
FLAGS = -Wall -Wextra -Werror
$(NAME):
		gcc -c $(FLAGS) -I $(HDRS) $(SRCS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)
all:	$(NAME)
clean:
		rm -f $(OBJS)
fclean:     clean
		rm -f $(NAME)
re:		fclean all
.PHONY:	all clean fclean re