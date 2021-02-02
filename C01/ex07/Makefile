
NAME		=	replace

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror

SRC			=	main.cpp

OBJ			=	$(SRC:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJ)
				$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o			:	%.cpp
				$(CC) $(FLAGS) -c $< -o $@

clean		:
				rm -rf *.replace
				rm -rf *.o

fclean		:	clean
				rm -rf $(NAME)

re			:	fclean all
