/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachab <nachab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:39:02 by nachab            #+#    #+#             */
/*   Updated: 2022/10/16 18:00:37 by nachab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL && f != NULL)
	{
		while (lst != NULL)
		{
			if (lst->content != NULL)
				f(lst->content);
			lst = lst->next;
		}
	}
}
/*
int main()
{
    char    str1[] = "it's";
    char    str2[] = "working";
    t_list  *head;
    t_list  *fnode = malloc(sizeof(t_list));
    t_list  *snode = malloc(sizeof(t_list));
    head = fnode;
    fnode->content = str1;
    fnode->next = snode;
    snode->content = str2;
    snode->next = NULL;
    ft_lstiter(head, test);
    printf("%s\n", (char *)head->content);
    head = head->next;
    printf("%s\n", (char *)head->content);
    return 0;
}*/
