FILE := main Zombie

OBJ_DIR := .obj

INC := Zombie.hpp

CC := c++ -Wall -Wextra -Werror -std=c++98
SRC := $(addsuffix .cpp, $(FILE))

OBJ := $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(FILE)))

NAME :=  zombie

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(INC)
	$(CC) -c -o $@ $<

clean:
	rm -rf $(OBJ_DIR)
	rm -f $(NAME)

fclean: clean

re: clean all

.PHONY: all fclean clean re