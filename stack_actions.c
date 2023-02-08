#include "push_swap.h"

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

	temp = *stack;
	while (temp->next != NULL)
	{
		if (temp->next->next == NULL)
			break;
		temp = temp->next;
	}
	temp->next->next = *stack;
	*stack = temp->next;
	temp->next = NULL;
}