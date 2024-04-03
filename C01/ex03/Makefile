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

#_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_ COLORS _/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_
RESET	= \033[0m
BLACK 	= \033[1;30m
RED 	= \033[1;31m
GREEN 	= \033[1;32m
YELLOW 	= \033[1;33m
BLUE	= \033[1;34m
PURPLE 	= \033[1;35m
CYAN 	= \033[1;36m
WHITE 	= \033[1;37m

#_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_ COMMANDS _/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_
CXX = c++
RM = rm -f
AR = ar -rcs

#_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_ FLAGS _/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
MKFLAGS		= --no-print-directory

#_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_ FILES _/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_
SRC				= 	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS 			:= $(SRC:.cpp=.o)
NAME			= Weapons
TARGET			= $(OBJS)

#_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_ RULES _/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_/=\_
all: $(NAME)

$(NAME): $(TARGET)

	$(CXX) $(CXXFLAGS) $(TARGET) -o $(NAME)

	echo "$(GREEN)  _____                   _ ";
	echo " |  __ \                 | |";
	echo " | |  | | ___  _ __   ___| |";
	echo " | |  | |/ _ \| '_ \ / _ \ |";
	echo " | |__| | (_) | | | |  __/_|";
	echo " |_____/ \___/|_| |_|\___(_)";

%.o : %.c
	echo "[$(CYAN)Compiling$(RESET)] $(CXXFLAGS) $(GREEN)$<$(RESET)"
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	echo "[$(RED) Deleted $(RESET)] $(GREEN)*/*.o$(RESET)"
	$(RM) $(OBJS)

fclean: clean
	echo "[$(RED) Deleted $(RESET)] $(GREEN)$(NAME)$(RESET)"
	$(RM) $(NAME)

re: fclean all

.SILENT:
