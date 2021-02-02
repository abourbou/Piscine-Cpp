
NAME		=		megaphone

CC			=		clang++

FLAGS		=		-Wall -Werror -Wextra

SRC			=		megaphone.cpp

OBJ			=		$(SRC:.cpp=.o)

all			:		$(NAME)

$(NAME)		:		$(OBJ)
					$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o			:		%.c
					$(CC) $(FLAGS) -c $< -o $@

clean		:
					rm -rf *.o

fclean		:		clean
					rm -rf $(NAME)