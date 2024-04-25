CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC_DIR = src
OBJ_DIR = obj
INCLUDE_DIR = include

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

NAME = philo

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ_FILES) $(LIBFT)
	@$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c -o $@ $<

clean:
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
