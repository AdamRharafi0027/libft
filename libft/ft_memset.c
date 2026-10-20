/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:39:52 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/20 19:32:00 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_ptr;

	s_ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_ptr[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
	// char str[] = "hello world";
	// char str1[] = "hello world";
	// int str = 2;
	// printf("ft_memset: %s\n", (char *)ft_memset(str, 's', 246246242982));
	// printf("memset: %s\n", (char *)memset(str1, 's', 246246242982));

// }
/*
	we get as result of ft_memset(2, 1337, sizeof(int))
	=> 960051513
	why ?
	because the int is converted to an unsigned char
	so only thits lowest 8 bits are used
	1337 = 0x539 the lowest 8 bits 0x39 = 57;
	befor we have in memory
	02	02	02	02
	after
	39	39	39	39
	0x39393939 = 960051513
*/
