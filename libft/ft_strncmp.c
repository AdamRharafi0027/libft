/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:46:53 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/21 15:24:08 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (unsigned char)s1[i] && (unsigned char)s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>
#include <string.h>


int	main(void)
{
	// Test 1: n = 0
	printf("Test 1: %d\n", ft_strncmp("hello", "world", 0));

	// Test 2: Both strings empty
	printf("Test 2: %d\n", ft_strncmp("", "", 5));

	// Test 3: One string empty
	printf("Test 3: %d\n", ft_strncmp("", "hello", 5));

	// Test 4: Difference after n characters
	printf("Test 4: %d\n", ft_strncmp("hello", "help", 3));

	// Test 5: Difference exactly at position n
	printf("Test 5: %d\n", ft_strncmp("hello", "help", 3));

	// Test 6: Difference at first character
	printf("Test 6: %d\n", ft_strncmp("abc", "bbc", 3));

	// Test 7: Identical strings with n larger than length
	printf("Test 7: %d\n", ft_strncmp("abc", "abc", 10));

	// Test 8: Unsigned char comparison
	printf("Test 8: %d\n", ft_strncmp("\200", "\177", 1));

	// Test 9: NULL pointers (undefined behavior)
	// ft_strncmp(NULL, "hello", 5);

	return (0);
}
