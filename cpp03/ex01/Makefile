NAME    := ScavTrap 
CC      := c++
CFLAGS  := -Wextra -Wall -Werror -g -std=c++98

OBJ_DIR := obj

INC	    := ClapTrap.hpp ScavTrap.hpp

SRCS    := ClapTrap.cpp ScavTrap.cpp main.cpp 
OBJS    := $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(OBJ_DIR)/%.o: ./%.cpp $(INC)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
