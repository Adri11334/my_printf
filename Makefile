##
## EPITECH PROJECT, 2021
## printf
## File description:
## Main kakefile
##

NO_CRITERION	=	sources/main.c

SRC	=	sources/convert.c	\
		sources/print_base.c	\
		sources/print_standard.c	\
		sources/utils.c	\
		sources/unsigned_o_u.c	\
		sources/print_pointeur.c	\
		sources/my_printf.c

OBJ	=	$(SRC:.c=.o) $(NO_CRITERION:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-Wall -Wextra -Werror -Wshadow -Wimplicit -pedantic

CPPFLAGS	+=	-I./include/

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

tests_file:	$(OBJ)
	gcc $(OBJ) -o printf_binary_test -ggdb3

tests_run:
	gcc -o uni_t $(SRC) tests/*.c $(CFLAGS) $(CPPFLAGS) --coverage -lcriterion
	-./uni_t
	rm uni_t

cover:
	mkdir -p criterions_r
	gcovr --exclude tests/ --html --html-details -o criterions_r/cover.html
	gcovr --branches --exclude tests/
	make -C ./ clean

clean:
	rm -f $(OBJ)
	rm -f *.o
	rm -f *~
	rm -f vgcore*
	rm -f #*
	rm -f *.gcda
	rm -f *.gcno

fclean:	clean
	rm -f $(NAME)
	rm -f criterions_r/*.html
	rm -f criterions_r/*.css
	rm -rf criterions_r/

my_tests: re tests_run cover

re:	fclean all

.PHONY: all clean fclean re tests_run cover
