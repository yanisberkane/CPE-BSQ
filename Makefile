##
## EPITECH PROJECT, 2021
## BSQ
## File description:
## Makefile for BSQ
##

SRC	=	main.c \
		get_map.c \
		str_to_arr.c \
		find_bsq.c \
		calculate_matix.c

CFLAGS	=	-Wall -Wextra -g3

LDFLAGS	=	-L. -lmy

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	make	-C	lib/my/
	gcc	-o	$(NAME)	$(SRC) -g $(LDFLAGS)

clean:
	rm -f	$(OBJ)
	rm -f *~
	rm -f '#'*'#'
	make	-C	lib/my/	clean

fclean:	clean
	rm	-f	$(NAME)
	make	-C	lib/my/	fclean

re:	fclean all

.PHONY = $(NAME) clean fclean re