/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:08:12 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/20 19:27:54 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_length;
	size_t	dest_length;

	src_length = ft_strlen(src);
	dest_length = 0;
	while (dest_length < size && dst[dest_length])
		dest_length++;
	if (dest_length == size)
		return (size + src_length);
	i = 0;
	while (src[i] && (dest_length + i) < size - 1)
	{
		dst[dest_length + i] = src[i];
		i++;
	}
	dst[dest_length + i] = '\0';
	return (dest_length + src_length);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
	// char dest[15] = "hello ";
	// char *src = "world";
	// printf("ft_strlcat : %zu\n", ft_strlcat(dest, src, 15));

	// char dest1[12] = "hello ";
	// char *src1 = "world";
	// printf("strlcat : %zu\n", strlcat(dest1, src1, 12));
// }
