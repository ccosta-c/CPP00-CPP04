# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/04 12:04:13 by ccosta-c          #+#    #+#              #
#    Updated: 2023/07/04 12:04:16 by ccosta-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#====================================COLORS=====================================
RESET	= \033[0m
BLACK 	= \033[1;30m
RED 	= \033[1;31m
GREEN 	= \033[1;32m
YELLOW 	= \033[1;33m
BLUE	= \033[1;34m
PURPLE 	= \033[1;35m
CYAN 	= \033[1;36m
WHITE 	= \033[1;37m

#===================================COMMANDS====================================
CXX = c++
RM = rm -rf
AR = ar -rcs

#====================================FLAGS======================================
CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98
MKFLAGS		= --no-print-directory


#=================================DIRECTORIES===================================
SRC_DIR	= ./srcs/
OBJ_DIR = ./objs/
HEADERS = -I ./headers/

#====================================FILES======================================
SRC				= 	main.cpp ScalarConverter.cpp
OBJS 			:= $(SRC:.cpp=.o)
NAME			= convert
COBJS			= $(addprefix $(OBJ_DIR), $(OBJS))
COSRC			= $(addprefix $(SRC_DIR), $(SRC))


#====================================RULES======================================
all: $(NAME)

$(NAME): $(COBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(COBJS) $(HEADERS)

	echo "$(GREEN)  _____                   _ ";
	echo " |  __ \                 | |";
	echo " | |  | | ___  _ __   ___| |";
	echo " | |  | |/ _ \| '_ \ / _ \ |";
	echo " | |__| | (_) | | | |  __/_|";
	echo " |_____/ \___/|_| |_|\___(_)$(RESET)";

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	echo "[$(CYAN)Compiling$(RESET)] $(CXXFLAGS) $(GREEN)$<$(RESET)"
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(HEADERS)

$(COBJS): | $(OBJ_DIR)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

clean:
	echo "[$(RED) Deleted $(RESET)] $(GREEN)*/*.o$(RESET)"
	$(RM) $(OBJ_DIR)

fclean: clean
	echo "[$(RED) Deleted $(RESET)] $(GREEN)$(NAME)$(RESET)"
	$(RM) $(NAME)

re: fclean all

go: re
	clear -x
	valgrind ./$(NAME)

.SILENT:
