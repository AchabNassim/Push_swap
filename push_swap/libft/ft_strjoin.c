/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachab <nachab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:36:10 by nachab            #+#    #+#             */
/*   Updated: 2022/10/04 19:35:15 by nachab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pt;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	pt = (char *)malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char));
	if (!pt)
		return (0);
	while (s1[i] != '\0')
	{
		pt[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		pt[i++] = s2[j++];
	pt[i] = '\0';
	return (pt);
}
/*
int	main(void)
{
	char	*str1 = "It's";
	char	*str2 = " working!!";
	char *pt = ft_strjoin(str1, str2);
	printf("%s\n", pt);
	return (0);
}
*/