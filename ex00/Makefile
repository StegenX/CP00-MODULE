C++ = c++

NAME = megaphone

CFLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp

all : $(NAME)

OBJ = $(SRC:%.cpp=%.o)

%.o : %.cpp
	$(C++) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(C++) $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : all clean

.PHONEY : all clean fclean re

