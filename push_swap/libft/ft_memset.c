/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachab <nachab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:31:45 by nachab            #+#    #+#             */
/*   Updated: 2022/10/01 16:05:33 by nachab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	size_t			i;
	unsigned char	charac;

	i = 0;
	str = (char *)b;
	charac = c;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	test[30] = "Working!";
	printf("%s\n", (char *)ft_memset(test, '6', 3));
	return (0);
}
*/
