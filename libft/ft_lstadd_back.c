/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:41:22 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/19 07:43:57 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;
	size_t	size;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	size = ft_lstsize(*lst);
	while (size > 0)
	{
		size--;
		if (current->next == NULL)
		{
			current->next = new;
			return ;
		}
		current = current->next;
	}
}


#include <stdio.h>

int main(void)
{
	t_list  *head = NULL;
	t_list  *node1;
	t_list  *node2;
	t_list  *node3;
	t_list  *node4;
	t_list  *currentNode;

	int a = 10;
	int b = 20;
	int c = 30;
	int d = 100;

	node1 = ft_lstnew(&a);
	node2 = ft_lstnew(&b);
	node3 = ft_lstnew(&c);
	node4 = ft_lstnew(&d);

	if (!node1 || !node2 || !node3 || !node4)
		return (1);

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	ft_lstadd_back(&head, node4);

	currentNode = head;
	while (currentNode)
	{
		printf("%d\n", *(int *)currentNode->content);
		currentNode = currentNode->next;
	}

	return (0);
}

/*
lst → the address of the box containing the head pointer.

*lst → the contents of that box: the address of the first node.

**lst → the actual first node.
*/
