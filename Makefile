NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.
RM = rm -rf

C_FILES = ft_isdigit.c ft_isalpha.c ft_isalnum.c

OBJ_FILES = $(C_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

clean:
	$(RM) $(OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean
	make

.PHONY: all clean fclean re
