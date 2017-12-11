##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Done for the lib
##

CC = gcc

SRC= 	my_putchar.c			\
	my_put_nbr.c			\
	my_putstr.c			\
	my_putstr_s.c			\
	my_put_nbr_unsigned.c		\
	my_strcmp.c			\
	my_strcpy.c			\
	my_strcat.c			\
	my_strlen.c

OBJ= $(SRC:.c=.o)

CFLAGS = -Wall -Wextra

RM = rm -f

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) ../$(NAME)

re: fclean all

.PHONY: all clean fclean