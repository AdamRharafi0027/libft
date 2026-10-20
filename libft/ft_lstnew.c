/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:53:52 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/20 09:16:14 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <stdio.h>

// int main()
// {
// 	t_list *node1;
// 	int a = 10;
// 	node1 = ft_lstnew(&a);
// 	printf("%d\n",*(int *)node1->content);
// 	free(node1);
// }
		// node->content = malloc(ft_strlen((char *)content));
		// ft_memcpy(node->content, content, ft_strlen((char *)content));
