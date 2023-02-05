#include "push_swap.h"

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