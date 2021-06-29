##
## EPITECH PROJECT, 2020
## makefile
## File description:
## compile etc..
##

CFLAGS	=	-Wall -Wextra -g3 -I./include

SRC	=	src/init.c\
		src/is_the_right_map.c\
		src/lose.c\
		src/main.c\
		src/movement.c\
		src/my_point_h.c\
		src/my_sokoban.c\
		src/my_str_to_word_array.c\
		src/reload.c\
		src/size.c\
		src/win.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
		make -C ./lib
		gcc -o $(NAME) $(SRC) $(CFLAGS) -L./lib -lmy -lncurses

clean:
		rm -f $(OBJ)
		rm -f $(NAME)

fclean:	clean
		make fclean -C ./lib

re:	fclean all
