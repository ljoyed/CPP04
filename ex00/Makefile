NAME = poly

CXX = c++

CFLAGS = -Werror -Wall -Wextra -std=c++98 #-fsanitize=address

RM = rm -rf

SRCS = 	main.cpp\
		Animal.cpp\
		Dog.cpp\
		Cat.cpp\
		WrongCat.cpp\
		WrongAnimal.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(OBJS)

re : fclean all clean