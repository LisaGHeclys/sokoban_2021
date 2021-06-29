##
## EPITECH PROJECT, 2020
## makefile
## File description:
## compile etc..
##

CFLAGS	=	-Wall -Wextra -g3 -I./include -Werror

SRC	=	my/convert_base.c\
		my/disp_stdarg.c\
		my/my_getnbr.c\
		my/my_intlen.c\
		my/my_putchar.c\
		my/my_put_nbr.c\
		my/my_putstr.c\
		my/my_putstrprintf.c\
		my/my_revstr.c\
		my/my_strlen.c\
		my/my_unstring.c\
		flags_filter.c\
		my_printf.c\

OBJ	=	$(SRC:.c=.o)

TEST	=	tests/test_simple_printf.c \
			tests/test_convert_printf.c

TES_OBJ	=	$(TEST:.c=.o)

NAME	= libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
			cp my/myprintf.h ../include/
			gcc -c $(SRC) $(CFLAGS)
			ar rc $(NAME) *.o
			rm -f lib/my/.o *.o

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:	fclean all

unit_tests:
			gcc -o test $(TEST) $(CFLAGS) -L./ -lmy -lcriterion --coverage

tests_run:	unit_tests
			./test
