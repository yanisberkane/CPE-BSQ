##
## EPITECH PROJECT, 2021
## Library Makefile
## File description:
## Library compilator and cleaner
##

SRC	=	my_putchar.c	\
		my_putstr.c		\
		my_putstr_err.c \
		my_strlen.c \
		my_getnbr.c \
		put_base_nbr.c \
		my_compute_power_rec.c \
		my_strcmp.c \
		my_printf.c \
		my_put_uns_nbr.c \
		my_put_capstr.c	\
		my_list.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	cp libmy.a ../..
	cp my.h ../../include

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f ../../$(NAME)

re:	fclean all

.PHONY = $(NAME) clean fclean re
