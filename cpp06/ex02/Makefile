NAME    := identify
CXX     := c++
CXXFLAGS := -Wextra -Wall -Werror -g -I. -I./include -std=c++98 -I./include

OBJ_DIR := obj
SRC_DIR := src

SRCS    := $(wildcard $(SRC_DIR)/*.cpp)
OBJS    := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
HEADERS := $(wildcard include/*.hpp)

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS)
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
