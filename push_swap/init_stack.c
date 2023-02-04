#include "push_swap.h"

t_stack	*ft_lst_new(int numb)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (0);
	node->data = numb;
	node->next = NULL;
	node->rank = 0;
	return (node);
}

int	push(t_stack **stack, t_stack *node)
{
	if (!node)
		return (-1);
	if (!*stack)
		*stack = node;
	else
	{
		node->next = *stack;
		*stack = node;
	}
	return (0);
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
}