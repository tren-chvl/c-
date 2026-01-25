NAME = harlFilter
CPP = c++
SRC = 	main.cpp \
		Harl.cpp
OBJ = $(SRC:.cpp=.o)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean :
	rm -rf $(OBJ) $(NAME)

re : fclean all

.PHONY : all clean fclean re