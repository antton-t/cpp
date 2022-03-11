NAME = convert

CC = c++

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -MMD -MP

SRCS =	main.cpp 

OBJS = $(SRCS:%.cpp=%.o)

DEP = $(OBJS:.o=.d)

all : $(NAME)

$(NAME) :  $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -I .


clean :
	rm -rf $(OBJS)
	rm -rf *.d

-include $(DEP)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re 
