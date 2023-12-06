NAME=PhoneBook
SRC=PhoneBook.cpp src.cpp phonbook_src.cpp
OBJ=$(SRC:.cpp=.o)
cc=g++
CPPFLAGS = #-Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME): $(OBJ)
	$(cc) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean:
	rm $(OBJ)
fclean: clean
	rm  $(NAME)
re: fclean all
	