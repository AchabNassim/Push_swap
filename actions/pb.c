#include "../push_swap.h"

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*temp;

	if (!*stack_a)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = NULL;
	push(stack_b, temp);
	node_position(*stack_a);
	ft_putstr_fd("pb\n", 2);
}