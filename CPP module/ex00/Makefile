CPP = c++
FLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp


OBJ = $(SRC:.cpp=.o)

TRG = megaphone

all: $(TRG)

							
$(TRG): $(OBJ)
	$(CPP) $(FLAGS) $(SRC) -o $(TRG)

%.o : %.cpp
	$(CPP) $(FALGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TRG)

fclean: clean

re : fclean all  

