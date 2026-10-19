/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 09:45:11 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/19 11:27:58 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void print_content(void *content);
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}

// #include <stdio.h>
// void print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }
// int main()
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	t_list	*current;

// 	char *a1 = "hello";
// 	char *a2 = "world";
// 	char *a3 = "wide";

// 	node1 = ft_lstnew(a1);
// 	node2 = ft_lstnew(a2);
// 	node3 = ft_lstnew(a3);

// 	node1->next = node2;
// 	node2->next = node3;
// 	// node3 has NULL as next cause of ft_lstnew function
// 	ft_lstiter(node1, print_content);
// 	current = node1;

// 	while (current)
// 	{
// 		// printf("%s\n", *(int *)current->content);
// 		current = current->next;
// 	}
// }
