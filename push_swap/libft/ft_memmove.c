/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachab <nachab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:10:23 by nachab            #+#    #+#             */
/*   Updated: 2022/10/03 20:36:00 by nachab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *s, size_t len)
{
	size_t		i;
	char		*d;
	const char	*src;

	if (!dst && !s)
		return (0);
	i = 0;
	d = (char *)dst;
	src = (char *)s;
	if (dst > s)
	{
		while (len--)
			d[len] = src[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = src[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	test[30] = "Working!";
	printf("%s\n", (char *)ft_memmove(&test[1], test, ft_strlen(test)));
	printf("%s\n", test);
	return (0);
}
*/
