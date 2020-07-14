##
## EPITECH PROJECT, 2020
## 207demography
## File description:
## makefile
##

SRC	=	src/Main.cpp	\
		src/Demography.cpp

OBJ	=	$(SRC:.cpp=.o)

NAME	=	207demography

CFLAGS	=	-Wall -Wextra -Werror

all:		$(NAME) message

$(NAME):	$(OBJ)
		g++ -o $(NAME) $(OBJ) $(CFLAGS) -lm -I ./include

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all

message:
		@echo "Successfully compiled!"
