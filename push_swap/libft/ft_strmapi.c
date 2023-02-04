/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachab <nachab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:06:23 by nachab            #+#    #+#             */
/*   Updated: 2022/10/07 12:20:08 by nachab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	tester(unsigned int index, char c)
{
	if (index % 2 == 0 && (c > 96 && c < 123))
		c -= 32;
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				size;
	char			*pt;

	if (!s)
		return (0);
	i = 0;
	size = ft_strlen(s) + 1;
	pt = (char *)malloc(size * sizeof(char));
	if (pt == 0)
		return (0);
	while (s[i])
	{
		pt[i] = f(i, s[i]);
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
/*
int	main(void)
{
	char *test = "it's fucking working.";
	char *test2 = ft_strmapi(test, tester);
	printf("%s", test2);
	return (0);
}*/