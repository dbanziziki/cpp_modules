NAME = ex01


CC = clang++

SRCS = main.cpp \
		Zombie.cpp \
		ZombieHorde.cpp \

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all