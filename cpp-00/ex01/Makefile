NAME = phonebook
CPP = c++;
SRC = phonebook.cpp
OBJ = $(SRC:.cpp=.o)
CPPFLAG = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAG) -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean :
	rm -rf $(OBJ) $(NAME)

re : fclean all

.PHONY  : all clean fclean re