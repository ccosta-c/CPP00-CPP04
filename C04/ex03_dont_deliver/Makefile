
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
RM = rm -f
AR = ar -rcs

#====================================FLAGS======================================
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g
MKFLAGS		= --no-print-directory


#=================================DIRECTORIES===================================
SRC_DIR	= ./srcs/
OBJ_DIR = ./objs/
HEADERS = -I ./headers/

#====================================FILES======================================
SRC				= 	main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp
OBJS 			:= $(SRC:.cpp=.o)
NAME			= Interfaces
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
	echo " |_____/ \___/|_| |_|\___(_)";

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	echo "[$(CYAN)Compiling$(RESET)] $(CXXFLAGS) $(GREEN)$<$(RESET)"
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(HEADERS)

clean:
	echo "[$(RED) Deleted $(RESET)] $(GREEN)*/*.o$(RESET)"
	$(RM) $(OBJS)

fclean: clean
	echo "[$(RED) Deleted $(RESET)] $(GREEN)$(NAME)$(RESET)"
	$(RM) $(NAME)

re: fclean all

go: re
	clear -x
	valgrind ./$(NAME)

.SILENT:
