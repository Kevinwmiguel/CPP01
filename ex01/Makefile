NAME        = ZombieHorde
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98

SRCS:		= main.cpp Zombie.cpp zombieHorde.cpp
OBJS:		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(SRCS)
 
clean:
	rm -f $(OBJS)
fclean:
	rm -f $(NAME)
re:
	fclean all