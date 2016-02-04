# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vklepper <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 17:53:51 by vklepper          #+#    #+#              #
#    Updated: 2015/12/14 13:38:53 by vklepper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
EXE = Exe
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC = `ls | grep "\.c"` 
OBJECTS = `ls | grep "\.o"`

all: $(NAME)
$(NAME):
	@$(CC) $(FLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(EXE)

re: fclean all
