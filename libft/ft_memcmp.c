/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:24:16 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/18 13:09:07 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*s1_ptr;
	unsigned const char	*s2_ptr;

	i = 0;
	s1_ptr = (unsigned const char *)s1;
	s2_ptr = (unsigned const char *)s2;
	while (i < n)
	{
		if (s1_ptr[i] != s2_ptr[i])
			return (s1_ptr[i] - s2_ptr[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char *s1 = "herrrry";
// 	char *s2 = "herrrrg";

// 	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, -5));
// 	printf("memcmp: %d\n", memcmp(s1, s2, -5));
// }

// if we give them a different chars it will work
//	because is will reach the different chars and then return;

//	but if they are the same it will stay count intil the SIZE_MAX
// because size_t = -5 => SIZE_MAX - 4
// so n = SIZE_MAX
