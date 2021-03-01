NAME		=	serialization

CC			=	clang++

FLAGS		=	-Wall -Werror -Wextra --std=c++98

SRC			=	main.cpp serialize.cpp deserialize.cpp

OBJ			=	$(SRC:.cpp=.o)

INC			=	serialize.hpp

all			:	$(NAME)

$(NAME)		:	$(OBJ) $(INC)
				$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o			:	%.cpp $(INC)
				$(CC) $(FLAGS) -c $< -o $@

clean		:
				rm -rf *.o

fclean		:	clean
				rm -rf $(NAME)