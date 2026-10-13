/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 19:41:46 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/13 19:51:09 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (i+j < len && big[i + j] && little[j]
		&& big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
int main()
{
	char *res1 = ft_strnstr("Hello World", "World", 11); // Finds "World"
	char *res2 = ft_strnstr("Hello World", "World", 5);	 // NULL
	char *res3 = ft_strnstr("Hello", "", 5);			 // Finds the beginning of "Hello"
	printf("%s\n%s\n%s\n", res1, res2, res3);
}
