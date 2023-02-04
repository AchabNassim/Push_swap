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

char	*ft_strjoin(char *s1, char *s2)
{
	char	*buffer;
	int		i;
	int		j;

	i = 0;
	j = 0;
	buffer = malloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	if (!buffer)
		return (0);
	while (s1[i])
	{
		buffer[i] = s1[i];
		i++;
	}
	buffer[i++] = ' ';
	while (s2[j])
		buffer[i++] = s2[j++];
	buffer[i] = '\0';
	free(s1);
	return (buffer);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] != '\0' && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

int	valid_number(char *arr)
{
	if (*arr == '+' || *arr == '-')
		arr++;
	while (*arr != '\0')
	{
		if (ft_isdigit(*arr) != 1)
			return (-1);
		arr++;
		if (*arr == ' ' || *arr == '\t')
			break ;
	}
	return (0);
}

int	is_number(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (arr[i] == '+' || arr[i] == '-' || ft_isdigit(arr[i]) == 1)
		{
			if (valid_number(&arr[i]) != 0)
				return (-1);
		}
		else if (ft_isdigit(arr[i]) != 1 && arr[i] != ' ')
			return (-1);
		i++;
	}
	return (0);
}

int	calculate_elements(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}

char	**create_char_array(int ac, char **av)
{
	int		i;
	char	*join;
	char	**array;

	i = 1;
	join = ft_strdup(av[i++]);
	while (i < ac)
	{
		join = ft_strjoin(join, av[i]);
		i++;
	}
	if (is_number(join) == -1)
	{
		free(join);
		ft_putstr_fd("Error\n", 2);
		exit (1);
	}
	array = ft_split(join, ' ');
	free(join);
	return (array);
}

int	check_duplicates(char **arr)
{
	int	valid;
	int	i;
	int	j;

	i = 0;
	while (arr[i] != NULL)
	{
		j = 0;
		valid = 0;
		while (arr[j] != NULL)
		{
			if (ft_strcmp(arr[i], arr[j]) == 0)
				valid++;
			j++;
		}
		if (valid > 1)
			return (-1);
		i++;
	}
	return (0);
}

int	check_limits(char **arr)
{
	long	data;
	int		i;

	data = 0;
	i = 0;
	while (arr[i] != NULL)
	{
		data = ft_atoi(arr[i]);
		if (data > INT_MAX || data < INT_MIN)
			return (-1);
		i++;
	}
	return (0);
}

void	free_array(char	**arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	create_stack(t_stack **stack, char **arr)
{
	int		i;
	int		data;
	t_stack	*node;
	
	i = calculate_elements(arr) - 1;
	data = 0;
	while (i >= 0)
	{
		data = ft_atoi(arr[i]);
		node = ft_lst_new(data);
		if (!node)
			return ;
		push(stack, node);
		i--;
	}
}

int	parse_args(int ac, char **av, t_stack **a, int *stack_size)
{
	char	**arr;
	
	if (ac < 3)
		return (1);
	arr = create_char_array(ac, av);
	if (check_duplicates(arr) == -1 || check_limits(arr) == -1)
	{
		free_array(arr);
		ft_putstr_fd("Error\n", 2);
		exit (1);
	}
	create_stack(a, arr);
	*stack_size = calculate_elements(arr);
	free_array(arr);
	return (0);
}

void	stack_pos(t_stack *stack)
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

int	check_if_sorted(t_stack *stack)
{
	t_stack	*temp;

	while (stack != NULL)
	{
		temp = stack;
		while (temp != NULL)
		{
			if (temp->data < stack->data)
				return (1);
			temp = temp->next;
		}
		stack = stack->next;
	}
	return (0);
}

void	rank_elements(t_stack *stack, int size)
{
	t_stack	*temp;
	t_stack	*rank;

	while (size > 0)
	{
		temp = stack;
		rank = stack;
		while (temp->next != NULL)
		{
			if (rank->data < temp->next->data && temp->rank == 0)
			{	
				rank = temp->next;
			}
			temp = temp->next;
		}
		rank->rank = size--;
	}
}

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

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int	stack_size;

	a = NULL;
	b = NULL;
	stack_size = 0;
	parse_args(ac, av, &a, &stack_size);
	stack_pos(a);
	if (check_if_sorted(a) == 0)
		printf("stack is already sorted!\n");
	//rank_elements(a, stack_size);
	print_stack(a);
	print_stack(b);
	//sa(&a);
	pb(&b, &a);
	pb(&b, &a);
	//ss(&a, &b);
	print_stack(a);
	print_stack(b);
	return (0);
}
