NAME = ex01

CC = clang++

SRCS = Contact.cpp \
		PhoneBook.cpp \
		main.cpp  \
	
OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra 

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all