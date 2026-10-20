/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:29:36 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/20 09:28:18 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*head;
	t_list	*current;

	if (!f || !del || !lst)
		return (NULL);
	head = NULL;
	current = lst;
	while (current)
	{
		new_node = ft_lstnew(f(current->content));
		if (!new_node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_node);
		current = current->next;
	}
	return (head);
}

/*
		// if (!head)
		// {
		// 	head = new_node;
		// 	last = new_node;
		// }
		// else {
		// 	last->next = new_node;
		// 	last = new_node;
		// }
 */
// #include <stdio.h>

// void *to_uppercase(void *content)
// {
//     char *str;
//     char *new_str;
//     int  i;

//     str = (char *)content;
//     new_str = malloc(ft_strlen(str) + 1);
//     if (!new_str)
//         return (NULL);
//     i = 0;
//     while (str[i])
//     {
//         new_str[i] = ft_toupper(str[i]);
//         i++;
//     }
//     new_str[i] = '\0';
//     return ((void *)new_str);
// }

// void	del(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*node4;
// 	t_list	*head = NULL;

// 	t_list	*current;

// 	char *a1 = "hello";
// 	char *a2 = "world";
// 	char *a3 = "wide";
// 	char *a4 = "GTA";

// 	node1 = ft_lstnew(a1);
// 	node2 = ft_lstnew(a2);
// 	node3 = ft_lstnew(a3);
// 	node4 = ft_lstnew(a4);

// 	head = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	// node4 has NULL as next cause of ft_lstnew function
// 	// ft_lstiter(node1, to_uppercase);
// 	current = ft_lstmap(head, to_uppercase, del);

// 	while (current)
// 	{
// 		printf("%s\n", (char *)current->content);
// 		current = current->next;
// 	}
// }
