NAME	:= megaphone
CC		:= cc
CFLAGS	:= -Wextra -Wall -Werror -g -std=c++98
OBJ_DIR = obj

OBJS	:= $(NAME:/%.cpp=$(OBJ_DIR)/%.o)

# Default target
all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(NAME)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
