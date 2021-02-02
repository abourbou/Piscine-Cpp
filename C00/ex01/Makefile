
NAME		=	phonebook

CC			=	clang++

FLAGS		=	-Wall -Werror -Wextra

SRC			=	Contact.cpp phone_book.cpp tools.cpp

OBJ			=	$(SRC:.cpp=.o)

INC			=	Contact.hpp phone_book.hpp

all			:	$(NAME)

$(NAME)		:	$(OBJ) $(INC)
				$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o			:	%.cpp $(INC)
				$(CC) $(FLAGS) -c $< -o $@

clean		:
				rm -rf *.o

fclean		:	clean
				rm -rf $(NAME)