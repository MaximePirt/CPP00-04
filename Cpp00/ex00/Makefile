# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpierrot <mpierrot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 12:26:58 by mpierrot          #+#    #+#              #
#    Updated: 2024/03/30 03:47:59 by mpierrot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES = megaphone.cpp

SRCDIR =
OBJ_D = objs
OBJ_FILES = $(SRC_FILES:%.cpp=$(OBJ_D)/%.o)
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = megaphone
RM = rm -rf

DEFCOLOR = \033[0;39m
GREEN    = \033[1;92m
YELLOW   = \033[0;93m
PURPLE   = \033[0;95m
CYAN     = \033[0;96m

all: $(NAME)

$(NAME): $(OBJ_FILES)
	@$(CC) $(OBJ_FILES) -o $(NAME)
	@echo "$(GREEN)$(NAME) has been created successfully.$(DEFCOLOR)"

$(OBJ_D)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@echo "$(YELLOW)Compiling $< $(DEFCOLOR)"
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_D)
	@echo "$(PURPLE)Object files have been removed.$(DEFCOLOR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(CYAN)$(NAME) has been removed.$(DEFCOLOR)"

re: fclean all
	@echo "$(GREEN)$(NAME) was remake successfully $(DEFCOLOR)"

.PHONY: all clean fclean re