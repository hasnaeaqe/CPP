CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = megaphone.cpp

OB = $(SRCS:.cpp=.o)

NAME = megaphone

all: $(NAME)

$(NAME): $(OB)
	$(CC) $(CFLAGS) $(OB) -o $(NAME)


%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM)  $(OB) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean