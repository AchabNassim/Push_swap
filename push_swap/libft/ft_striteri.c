/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachab <nachab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:44:39 by nachab            #+#    #+#             */
/*   Updated: 2022/10/11 19:25:37 by nachab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	test(unsigned int index, char *c)
{
	int	i;

	i = 0;
	if (index == 0 && (*c > 96 && *c < 123))
		c[0] -= 32;
	if (*c == 's')
		*c = 'v';
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s != 0)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
int	main()
{
	char word[] = "what a loser!";
	ft_striteri(word, test);
	printf("%s\n", word);
}*/
