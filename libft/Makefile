NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_ascii.c ft_isprint.c ft_isalpha.c ft_strlen.c
OBJECTS = $(SRC:.c=.o)
HEADER = libft.h

all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c &< -o $@
clean:
	rm -f ${OBJ}
fclean: clean
	rm -f $(NAME)
re: fclean all
