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

void	create_stack(t_stack **stack, char **arr)
{
	int		i;
	int		data;
	int		stack_size;
	t_stack	*node;
	
	stack_size = calculate_elements(arr);
	i = stack_size - 1;
	data = 0;
	while (i >= 0)
	{
		data = ft_atoi(arr[i]);
		node = ft_lst_new(data);
		if (!node)
			return ;
		node->stack_size = stack_size;
		push(stack, node);
		i--;
	}
}

int	parse_args(int ac, char **av, t_stack **a)
{
	char	**arr;
	int		stack_size;

	arr = create_char_array(ac, av);
	stack_size = calculate_elements(arr);
	if (stack_size < 2)
	{
		free_array(arr);
		exit (1);
	}
	if (check_duplicates(arr) == -1 || check_limits(arr) == -1)
	{
		free_array(arr);
		ft_putstr_fd("Error\n", 2);
		exit (1);
	}
	create_stack(a, arr);
	free_array(arr);
	return (0);
}

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
