NAME = FragTrap
CPP= c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp  ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
INCS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

$(NAME): $(SRCS) $(INCS) Makefile
	$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re : clean all

.PHONY: all clean fclean re