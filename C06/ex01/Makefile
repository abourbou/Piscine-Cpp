NAME		=	convert

CC			=	clang++

FLAGS		=	-Wall -Werror -Wextra

SRC			=	

OBJ			=	$(SRC:.cpp=.o)

INC			=	

all			:	$(NAME)

$(NAME)		:	$(OBJ) $(INC)
				$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o			:	%.cpp $(INC)
				$(CC) $(FLAGS) -c $< -o $@

clean		:
				rm -rf *.o

fclean		:	clean
				rm -rf $(NAME)