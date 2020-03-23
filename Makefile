NAME = rush00_program

CFLAGS = -Wall -Wextra -Werror

SRC = main.c ft_putchar.c rush00.c ft_atoi.c

CC = GCC

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	/bin/rm -f *~

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
