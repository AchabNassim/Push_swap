#include "push_swap.h"

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	node_position(*stack_a);
	ft_putstr_fd("ss\n", 2);
}