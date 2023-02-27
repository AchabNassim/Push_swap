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

// void	print_stack(t_stack *stack)
// {
// 	printf("******************************************\n");
// 	while (stack != NULL)
// 	{
// 		printf("**\tdata == '%d'\tposition == '%d'\trank == '%d'\t**\n", stack->data, stack->stack_pos, stack->rank);
// 		stack = stack->next;
// 	}
// 	printf("******************************************\n");
// }

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	parse_args(ac, av, &a);
	if (check_if_sorted(a) == 0)
		return (0);
	sort_elements(&a, &b, a->stack_size);
	// print_stack(a);
	return (0);
}
