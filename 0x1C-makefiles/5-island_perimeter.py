CC = gcc
SRC = main.c holberton.c
OBJ = $(SRC:.c=.o)
NAME = holberton
RM = rm
CFLAGS = -Wall -Werror -Wextra -pedantic

all: $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) -f $(NAME) *~

oclean:
	$(RM) -f $(OBJ)

fclean: clean oclean

re: oclean all
