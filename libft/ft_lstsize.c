/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:02:23 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/17 12:56:28 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	size_t	count;
	t_list	*current;

	count = 0;
	current = lst;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

// #include <stdio.h>

// int main()
// {
// 	int a = 10;
// 	int b = 20;
// 	int c = 30;
// 	int d = 30;

// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*node4;

// 	// t_list	*head = node1;

// 	node1 = ft_lstnew(&a);
// 	node2 = ft_lstnew(&b);
// 	node3 = ft_lstnew(&c);
// 	node4 = ft_lstnew(&d);

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	node4->next = NULL;

// printf("size of linked list : %d\n", ft_lstsize(node1));

// }
