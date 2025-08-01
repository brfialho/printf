CC= cc
CCFLAGS= -Wall -Werror -Wextra
SRC = srcs/ft_printf.c \
		srcs/ft_count_utils.c \
		srcs/ft_putnbr_utils.c \
		srcs/ft_put_utils.c 
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all