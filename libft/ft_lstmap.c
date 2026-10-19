/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:29:36 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/19 12:50:12 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_node;
	t_list	*head;
	t_list	*last;

	if (!f || !del || !lst)
		return (NULL);
	current = lst;
	head = NULL;

	while (current)
	{
		new_node = ft_lstnew(f(current->content));
		if (!new_node)
		{
			del(new_node->content);
			return (NULL);
		}
		new_node->next = head;
		head = new_node;
		last = ft_lstlast(head);
		ft_lstadd_front(&head, last);
		current = current->next;
	}
	return (head);
}

#include <stdio.h>

void *to_uppercase(void *content)
{
    char *str;
    char *new_str;
    int  i;

    str = (char *)content;
    new_str = malloc(ft_strlen(str) + 1);
    if (!new_str)
        return (NULL);
    i = 0;
    while (str[i])
    {
        new_str[i] = ft_toupper(str[i]);
        i++;
    }
    new_str[i] = '\0';
    return ((void *)new_str);
}

int main()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	t_list	*current;

	char *a1 = "hello";
	char *a2 = "world";
	char *a3 = "wide";

	node1 = ft_lstnew(a1);
	node2 = ft_lstnew(a2);
	node3 = ft_lstnew(a3);

	node1->next = node2;
	node2->next = node3;
	// node3 has NULL as next cause of ft_lstnew function
	// ft_lstiter(node1, to_uppercase);
	current = node1;

	while (current)
	{
		// printf("%s\n", *(int *)current->content);
		current = current->next;
	}
}
