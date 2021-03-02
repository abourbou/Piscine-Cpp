NAME		=	array

CC			=	clang++

FLAGS		=	-Wall -Werror -Wextra

SRC			=	main.cpp

OBJ			=	$(SRC:.cpp=.o)

INC			=	Array.hpp

all			:	$(NAME)

$(NAME)		:	$(OBJ) $(INC)
				$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o			:	%.cpp $(INC)
				$(CC) $(FLAGS) -c $< -o $@

clean		:
				rm -rf *.o

fclean		:	clean
				rm -rf $(NAME)

re			:	fclean all