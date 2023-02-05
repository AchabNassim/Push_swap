NAME = push_swap

CFLAGS = -Wall -Werror -Wextra

CC = gcc

SRC = push_swap.c init_stack.c utils.c node_utils.c check_args.c actions.c actions2.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@$(MAKE) -C libft
	$(CC) $(CFLAGS) -o $@ $^ libft/libft.a

clean :
	rm -f *.o
	rm -f libft/*.o

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY = all re fclean clean
