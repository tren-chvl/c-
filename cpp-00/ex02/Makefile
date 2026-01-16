NAME = account
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = 	Account.cpp \
		tests.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean :
	rm -rf $(OBJ) $(NAME)

re : clean all

.PHONY : all clean fclean re
