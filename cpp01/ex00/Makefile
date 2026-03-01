NAME    := BraiiiiiiinnnzzzZ
CC      := c++
CFLAGS  := -Wextra -Wall -Werror -g -std=c++98
SRC_DIR := src
OBJ_DIR := obj

INC	    := $(wildcard $(SRC_DIR)/*.hpp)
SRCS    := $(wildcard $(SRC_DIR)/*.cpp)
OBJS    := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(INC)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
