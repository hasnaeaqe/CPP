CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = Animal.cpp  main.cpp Cat.cpp Dog.cpp  WrongAnimal.cpp  WrongCat.cpp Brain.cpp

OBJ = $(SRCS:.cpp=.o)
NAME = Brain

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Animal.hpp  Cat.hpp Dog.hpp WrongAnimal.hpp  WrongCat.hpp Brain.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean