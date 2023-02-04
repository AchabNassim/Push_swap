/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachab <nachab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:56:49 by nachab            #+#    #+#             */
/*   Updated: 2023/01/23 19:56:59 by nachab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **stack_a)
{
	t_stack	*temp;
	t_stack	*head;

	if (!*stack_a)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	head = *stack_a;
	while (head->next != NULL)
		head = head->next;
	head->next = temp;
	temp->next = NULL;
	ft_putstr_fd("ra", 2);
}

void	rb(t_stack **stack_b)
{
	t_stack	*temp;
	t_stack	*head;

	if (!*stack_b)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	head = *stack_b;
	while (head->next != NULL)
		head = head->next;
	head->next = temp;
	temp->next = NULL;
	ft_putstr_fd("ra", 2);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
