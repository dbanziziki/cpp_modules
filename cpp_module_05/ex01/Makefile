NAME = ex01

CC = clang++

SRCS = main.cpp Bureaucrat.cpp Form.cpp

FLAG = -Wall -Werror -Wextra -std=c++98

OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAG) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all