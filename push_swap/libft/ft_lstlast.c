/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachab <nachab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:42:53 by nachab            #+#    #+#             */
/*   Updated: 2022/10/14 18:54:48 by nachab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst != NULL)
	{
		while (lst->next != NULL)
			lst = lst->next;
		return (lst);
	}
	return (0);
}
/*
int	main()
{
	t_list	*head;
	t_list	*fnode = ft_lstnew("it's");
	t_list	*snode = ft_lstnew("working");
	head = fnode;
	head->next = snode;
	t_list	*last_node = ft_lstlast(head);
	printf("%s\n", (char *)last_node->content);
	return (0);
}*/
