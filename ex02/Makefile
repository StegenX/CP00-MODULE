C++ = c++

CFLAGS = -Wall -Wextra -Werror

NAME = account

SRC = Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp
	$(C++) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(C++) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : all clean 

.PHONY: clean fclean all