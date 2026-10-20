/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 13:18:46 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/17 18:40:52 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current->next != NULL)
		current = current->next;
	return (current);
}

// #include <stdio.h>

// int main()
// {
// 	int a = 10;
// 	int b = 15;
// 	int c = 25;

// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;

// 	node1 = ft_lstnew(&a);
// 	node2 = ft_lstnew(&b);
// 	node3 = ft_lstnew(&c);

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;

// 	t_list	*last_node = ft_lstlast(node1);

// 	printf("node1_ptr : %d\n", *(int *)last_node->content);
// 	free(node1);
// 	free(node2);
// 	free(node3);
// }
