/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachab <nachab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:09:58 by nachab            #+#    #+#             */
/*   Updated: 2023/01/21 18:10:02 by nachab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	printf("******************************************\n");
	while (stack != NULL)
	{
		printf("**\tdata == '%d'\tposition == '%d'\trank == '%d'\t**\n", stack->data, stack->stack_pos, stack->rank);
		stack = stack->next;
	}
	printf("******************************************\n");
}

void	sort_stack(t_stack **a, t_stack **b)
{
	int	i = 1;

	while (*a != NULL)
	{
		if ((*a)->rank != i)
			ra(a);
		else
		{
			i++;
			pb(b, a);
		}
	}
}

void	sort_a(t_stack **a, t_stack **b)
{
	while (*b)
	{
		pa(a, b);
	}
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int	stack_size;

	a = NULL;
	b = NULL;
	stack_size = 0;
	parse_args(ac, av, &a, &stack_size);
	if (check_if_sorted(a) == 0)
		return (0);
	sort_elements(&a, &b, stack_size);
	print_stack(a);
	return (0);
}
