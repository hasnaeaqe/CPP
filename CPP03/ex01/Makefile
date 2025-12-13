CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = ClapTrap.cpp  main.cpp  ScavTrap.cpp

OBJ = $(SRCS:.cpp=.o)
NAME = ClapTrap

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp ClapTrap.hpp  ScavTrap.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean