#include "push_swap.h"

void	node_position(t_stack *stack)
{
	int	i;

	i = 1;
	while (stack != NULL)
	{
		stack->stack_pos = i;
		i++;
		stack = stack->next;
	}
}

t_stack	*find_biggest_node(t_stack *stack)
{
	t_stack	*biggest;
	
	biggest = stack;
	while (stack != NULL)
	{
		if (stack->rank == 0)
		{	
			if (stack->data > biggest->data || biggest->rank != 0)
				biggest = stack;
		}
		stack = stack->next;
	}
	return (biggest);
}

void	rank_elements(t_stack *stack, int size)
{
	t_stack	*biggest;
	
	while (size > 0)
	{
		biggest = find_biggest_node(stack);
		biggest->rank = size--;
	}
}

void	swap(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack)
		return ;
	temp = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	temp->next = *stack;
	*stack = temp;
	node_position(*stack);
}

void	rotate(t_stack **stack)
{
	t_stack *head;
	t_stack *temp;

	temp = *stack;
	head = *stack;
	*stack = (*stack)->next;
	while (head->next != NULL)
		head = head->next;
	head->next = temp;
	temp->next = NULL;
	node_position(*stack);
}

void	reverse_rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*head;

	temp = *stack;
	*stack = (*stack)->next;
	head = *stack;
	while (head->next != NULL)
		head = head->next;
	head->next = temp;
	temp->next = NULL;
	node_position(*stack);
}