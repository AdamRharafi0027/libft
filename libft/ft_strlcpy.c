/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:59:18 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/20 18:45:11 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
	// char *str1 = "hello";
	// char dest1[10];
	// printf("strlcpy : %zu\n", (size_t)strlcpy(dest1, str1, 10));
	// printf("strlcpy : %zu\n", (size_t)strlcpy(dest1, str1, 10));

	// char *str = "hello";
	// char dest[10];
	// printf("ft_strlcpy : %zu\n", ft_strlcpy(dest, str, 0));

// }
