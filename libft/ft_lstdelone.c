/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 07:49:11 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/19 09:32:45 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// #include <stdio.h>

// int main()
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	t_list	*current;

// 	int a1 = 10;
// 	int a2 = 20;
// 	int a3 = 30;

// 	node1 = ft_lstnew(&a1);
// 	node2 = ft_lstnew(&a2);
// 	node3 = ft_lstnew(&a3);

// 	node1->next = node2;
// 	node2->next = node3;
// 	// node3 has NULL as next cause of ft_lstnew function
// 	current = node1;

// 	while (current)
// 	{
// 		printf("%d\n", *(int *)current->content);
// 		current = current->next;
// 	}

// }
