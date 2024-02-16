##
## EPITECH PROJECT, 2023
## my_hunter
## File description:
## Makefile
##

NAME = libmy.a

LIB_SRC = $(shell find . -type f -name '*.c')
LIB_OBJ = $(LIB_SRC:.c=.o)

DIR = ../include

FLAG = -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio

all: $(NAME) $(clean)

$(NAME): $(LIB_OBJ)
	ar rc $(NAME) $(LIB_OBJ)
	gcc -o my_hunter $(LIB_OBJ) -I$(DIR) $(FLAG) -L. -lmy -lm -I include

clean:
	rm -f $(LIB_OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f my_hunter

re: fclean all
