##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Done for the my_printf_bootstrap
##

CC = gcc

SRC = 	main.c 			\
	option.c		\
	display.c		\
	pattern_alpha.c		\
	pattern_delta.c 	\
	pattern_epsilon.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -I./include/

LDFLAGS = -L lib/my -lmy -lc_graph_prog

RM = rm -f

NAME = my_screensaver

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJ) $(LIB) -o $(NAME) -lm $(LDFLAGS)

clean:
	$(RM) $(OBJ)
	$(MAKE) -C ./lib/my clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean

re: fclean all

.PHONY: all clean fclean re
