# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lchambos <lchambos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/03 12:20:20 by lchambos          #+#    #+#              #
#    Updated: 2026/05/13 14:43:46 by lchambos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = maths

CPP = c++ -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp \
		fixed.cpp

OBJ = $(SRC:.cpp=.o)

GREEN = \033[0;92m
RED = \033[0;91m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(OBJ) -o $(NAME)
	@printf "$(GREEN)Executable created: $(NAME)$(RESET)\n"

%.o: %.cpp
	@$(CPP) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@printf "$(RED)Object files removed.$(RESET)\n"

fclean: clean
	@rm -f $(NAME)
	@printf "$(RED)Executable removed.$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re