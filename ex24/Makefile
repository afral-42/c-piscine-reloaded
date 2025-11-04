SRCS=srcs
HEADERS=headers/
CC=cc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
CFILES=$(SRCS)/ft_swap.c $(SRCS)/ft_strcmp.c $(SRCS)/ft_putchar.c $(SRCS)/ft_strlen.c $(SRCS)/ft_putstr.c
OFILES=$(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o: %.c
	$(CC) $(CFLAGS) -I$(HEADERS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
