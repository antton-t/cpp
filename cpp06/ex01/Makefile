NAME = convert

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

SRCS =	main.cpp 


OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) :   $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	c++ $(FLAGS) -c $< -I .


clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
