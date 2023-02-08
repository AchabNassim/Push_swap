#include "push_swap.h"

t_stack	*find_smallest_node(t_stack *stack)
{
	t_stack	*smallest;
	
	smallest = stack;
	while (stack != NULL)
	{
		if (stack->rank == 0)
		{
			if (stack->data < smallest->data || smallest->rank != 0)
				smallest = stack;
		}
		stack = stack->next;
	}
	return (smallest);
}

t_stack	*find_smallest_rank(t_stack *stack)
{
	t_stack	*smallest;

	smallest = stack;
	while (stack != NULL)
	{
		if (smallest->rank > stack->rank)
			smallest = stack;
		stack = stack->next;
	}
	return (smallest);
}


void	rank_elements(t_stack *stack, int size)
{
	t_stack	*smallest;
	int		index;

	index = 1;
	while (index <= size)
	{
		smallest = find_smallest_node(stack);
		smallest->rank = index++;
	}
}

void	reinit_rank(t_stack *stack)
{
	while (stack != NULL)
	{
		stack->rank = 0;
		stack = stack->next;
	}
}