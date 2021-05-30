##
## EPITECH PROJECT, 2020
## B-MUL-100-NAN-1-1-myhunter-victor.harri-chal
## File description:
## Makefile
##

SRC		=	src/analyse_events.c	\
				src/display.c		\
				src/init_struct.c	\
				src/main.c			\
				src/my_hunter.c		\
				src/my_clock.c 		\
				src/position.c		\
				src/rect.c			\
				src/score.c 		\
				src/clean.c 		\
				src/utils.c


OBJ		=	$(SRC:.c=.o)

NAME	=	my_hunter

FLAGS	=	-Wall -Wall -Wextra -I include/

SFML	=	-l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio

all:	$(NAME)

$(NAME):	$(OBJ)
			gcc -o 	$(NAME) $(OBJ) $(SFML) $(FLAGS)
			rm -f $(OBJ)

clean:
			rm -f	$(OBJ)

fclean:	clean
			rm -f 	$(NAME)

re:	fclean all
