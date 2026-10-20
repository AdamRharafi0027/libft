/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:08:19 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/20 17:40:41 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_ptr;
	unsigned const char	*src_ptr;

	i = 0;
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned const char *)src;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char *src1 = "hello";

// 	char dest1[10];
// 	memcpy(dest1, src1, 0);
// 	printf("memcpy: %s\n", dest1);

// 	char *src = "hello";
// 	char dest[10];
// 	ft_memcpy(dest, src, 0);
// 	printf("ft_memcpy: %s\n", dest);

// }
