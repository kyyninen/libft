# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 19:01:12 by tpolonen          #+#    #+#              #
#    Updated: 2022/10/01 19:43:30 by tpolonen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER_DIR = ./include/
TESTS_DIR = ./tests/
SRC_DIR = src
OBJ_DIR = obj

CC = gcc
CFLAGS = -c -g -Wall -Wextra -Werror -I$(HEADER_DIR)
ARFLAGS = rcs

NAME = libft.a

SRC := $(wildcard $(SRC_DIR)/*.c)
OBJ := $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC)) 

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiled libft objs"
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	@echo "Compiled libft.a"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) $< -o $@

$(OBJ_DIR):
	@mkdir -p $@

clean:
	@if [ -d "$(OBJ_DIR)" ]; \
		then @/bin/rm -rf $(OBJ_DIR); echo "Cleaned libft objs"; fi

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "Removed libft.a"

re: fclean all

.PHONY: all clean fclean re
