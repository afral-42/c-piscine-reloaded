CC=cc
NAME=ft_display_file
SRC=ft_display_file.c
OBJ=ft_display_file.o
CFLAGS=-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
