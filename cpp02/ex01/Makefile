NAME	:= Fixed
CC		:= c++
CFLAGS	:= -Wextra -Wall -Werror -g -std=c++98
LDFLAGS	:= -lm
OBJ_DIR	:= obj

INC		:= $(wildcard ./*.hpp)
SRCS	:= $(wildcard ./*.cpp)
OBJS	:= $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRCS))

all: $(NAME)

$(OBJ_DIR)/%.o: ./%.cpp $(INC)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
