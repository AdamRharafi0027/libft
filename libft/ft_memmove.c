/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:46:25 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/20 17:44:27 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	unsigned const char	*src_ptr;

	if (n == 0)
		return (dest);
	if (!src || !dest)
		return (NULL);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned const char *)src;
	if (dest_ptr < src_ptr)
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			--n;
			dest_ptr[n] = src_ptr[n];
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
	// char src[] = "ABCDEFG";
	// ft_memmove(src + 2, src, 2);
	// printf("ft_memmove: %s\n", src);

	// char src1[] = "ABCDEFG";
	// memmove(src1 + 2, src1, 2);
	// printf("memmove: %s\n", src1);
// }
