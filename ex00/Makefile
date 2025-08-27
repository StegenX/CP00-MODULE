C++ = c++

CFLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp

all : megaphone

OBJ = $(SRC:%.cpp=%.o)

%.o : %.cpp
	$(C++) $(CFLAGS) -c $< -o $@

megaphone : $(OBJ)
	$(C++) $(CFLAGS) $(OBJ) -o megaphone

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f megaphone

re : all clean

.PHONEY : all clean fclean re

