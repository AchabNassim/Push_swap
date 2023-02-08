NAME = push_swap

CFLAGS = -Wall -Werror -Wextra

CC = gcc

SRC = push_swap.c init_stack.c utils.c node_utils.c check_args.c stack_actions.c sort_elements.c small_sort.c actions/sa actions/sb actions/ss actions/pa actions/pb actions/ra actions/rb actions/rr actions/rra actions/rrb actions/rrr

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
