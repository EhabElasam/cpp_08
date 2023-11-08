# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelasam <eelasam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 15:46:59 by eelasam           #+#    #+#              #
#    Updated: 2023/11/08 11:00:04 by eelasam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic -MMD -MP

RM = rm -rf

NAME = a.out

SRC = main.cpp Span.cpp
OBJ = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)

all: $(NAME)

$(NAME): $(OBJ)
		@$(CXX) $(CPPFLAGS) $(OBJ) -o a.out

clean:
		@$(RM) $(OBJ) $(DEPS)

fclean: clean
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
-include $(DEPS)