NAME = RPN
SRCS = main.cpp RPN.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all

$(NAME) : $(OBJS)
	$(CXX) $(CXXARGS) -o $(NAME) $(OBJS)

.PHONY: all clean fclean re