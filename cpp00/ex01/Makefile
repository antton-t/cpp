NAME = phone_book

FLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRCS = main.cpp my_phone_book.cpp contact.cpp

INCLUDE = phone_book.hpp contact.class.hpp 

OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) :  $(INCLUDE) $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	clang++ -c $< -I .

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
