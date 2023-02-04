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
	t_stack	*temp;

	if (!*stack_a)
		return ;
	temp = (*stack_a)->next;
	(*stack_a)->next = (*stack_a)->next->next;
	temp->next = *stack_a;
	*stack_a = temp;
	stack_pos(*stack_a);
}

void	sb(t_stack **stack_b)
{
	t_stack	*temp;

	if (!*stack_b)
		return ;
	temp = (*stack_b)->next;
	(*stack_b)->next = (*stack_b)->next->next;
	temp->next = *stack_b;
	*stack_b = temp;
	stack_pos(*stack_b);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	stack_pos(*stack_a);
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
	stack_pos(*stack_a);
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
	stack_pos(*stack_a);
}
