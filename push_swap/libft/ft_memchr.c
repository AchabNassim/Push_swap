/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachab <nachab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:14:41 by nachab            #+#    #+#             */
/*   Updated: 2022/10/03 20:04:24 by nachab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const char		*str;

	str = s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	test[] = {'5', '\0', '4', '\0'};
	char	test2[] = {'a', 'b', 'c', '\0'};
	printf("%s\n", (char *)ft_memchr(test, '4', 3));
	printf("%s\n", (char *)ft_memchr(test2, 'b', 3));
	printf("%s\n", (char *)memchr(test, '4', 3));
	printf("%s\n", (char *)memchr(test2, 'b', 3));
	return (0);
}
*/
