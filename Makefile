NAME = libft.a

CC = cc

FLAGS = -Werror -Wextra -Wall

SRC = $(wildcard *.c)

OBJECTS = $(SRC:.c=.o)

INCLUDE = libft.h

#prends tous les fichiers et les compacte dans le fichier name (.a)
$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(FLAGS) $(INCLUDE) -c $<

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(NAME)

re: fclean all
