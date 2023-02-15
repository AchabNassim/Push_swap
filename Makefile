NAME = push_swap

CFLAGS = -Wall -Werror -Wextra

CC = gcc

SRC = push_swap.c init_stack.c utils.c node_utils.c check_args.c stack_actions.c sort_elements.c small_sort.c actions/sa.c actions/sb.c actions/ss.c actions/pa.c actions/pb.c actions/ra.c actions/rb.c actions/rr.c actions/rra.c actions/rrb.c actions/rrr.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@$(MAKE) -C libft
	$(CC) $(CFLAGS) -o $@ $^ libft/libft.a

clean :
	@rm -f *.o
	@rm -f libft/*.o

fclean : clean
	@rm -f $(NAME)
	@rm -f libft/libft.a
	
re : fclean all

.PHONY = all re fclean clean
