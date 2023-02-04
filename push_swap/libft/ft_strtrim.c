/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachab <nachab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:41:26 by nachab            #+#    #+#             */
/*   Updated: 2022/10/12 21:50:02 by nachab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_check(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return (1);
		i++;
	}
	return (0);
}

static void	copy(char *dst, const char *src, int len)
{
	int	i;

	i = 0;
	while (i < len - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*pt;
	size_t	length;
	size_t	size;

	if (!s1 || !set)
		return (0);
	i = 0;
	length = ft_strlen(s1) - 1;
	while (s1[i] && char_check(set, s1[i]) == 1)
		i++;
	while (length > i && char_check(set, s1[length]) == 1)
		length--;
	size = (length - i) + 1;
	pt = (char *)malloc((size + 1) * sizeof(char));
	if (pt == 0)
		return (0);
	copy(pt, &s1[i], size + 1);
	return (pt);
}
/*
int	main(void)
{
	char	*str = " . b. b a . It's working!!. b  .b";
	char	*pt = ft_strtrim(str, "a.b ");
	printf("%s\n", pt);
	return (0);
}
*/
