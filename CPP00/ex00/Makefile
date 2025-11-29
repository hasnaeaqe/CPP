CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = megaphone.cpp

OB = $(SRCS:.cpp=.o)

NAME = megaphone

all: $(NAME)

$(NAME): $(OB)
	$(CXX) $(CXXFLAGS) $(OB) -o $(NAME)


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM)  $(OB) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean