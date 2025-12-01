CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = Zombie.cpp zombieHorde.cpp main.cpp 

OBJ = $(SRCS:.cpp=.o)
NAME = Zombie

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Zombie.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean