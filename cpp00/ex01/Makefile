FILE := main Contact PhoneBook

OBJ_DIR := .obj

INC := Contact.hpp PhoneBook.hpp

CC := c++ -Wall -Wextra -Werror -pedantic -std=c++98
SRC := $(addsuffix .cpp, $(FILE))


OBJ := $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(FILE)))

NAME := phonebook


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