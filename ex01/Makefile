NAME = phonebook

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = include/

SRC_FILES = main.cpp PhoneBook.cpp Contact.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling [$(NAME)]..."
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Finished [$(NAME)]"

$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@echo "Compiling [$@]..."
	@$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<
	@echo "Finished [$@]"

clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
		rm -rf $(OBJ_DIR); \
		echo "Deleting all objects from /ex01..."; \
	else \
		echo "No objects to remove from /ex01."; \
	fi;

fclean: clean
	@if [ -f "$(NAME)" ]; then \
		rm -f $(NAME); \
		echo "Deleting $(NAME) from /ex01..."; \
	else \
		echo "No executable to remove from ex01."; \
	fi;

re: fclean all

.PHONY: all clean fclean re
