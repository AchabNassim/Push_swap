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