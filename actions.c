/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachab <nachab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:55:24 by nachab            #+#    #+#             */
/*   Updated: 2023/01/23 19:55:25 by nachab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **stack_a)
{
	swap(stack_a);
	ft_putstr_fd("sa\n", 2);
}

void	sb(t_stack **stack_b)
{
	swap(stack_b);
	ft_putstr_fd("sb\n", 2);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	node_position(*stack_a);
	ft_putstr_fd("ss\n", 2);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (!*stack_b)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
	push(stack_a, temp);
	node_position(*stack_a);
	ft_putstr_fd("pa\n", 2);
}

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
