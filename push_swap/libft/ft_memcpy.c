/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachab <nachab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:24:49 by nachab            #+#    #+#             */
/*   Updated: 2022/10/03 19:48:19 by nachab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*p_src;
	char		*p_dst;

	if (!dst && !src)
		return (0);
	i = 0;
	p_dst = (char *)dst;
	p_src = (char *)src;
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	*test = "It's working.";
	char	pt[30];
	printf("%s\n", (char *)ft_memcpy(pt, test, 4));
	return (0);
}
*/
