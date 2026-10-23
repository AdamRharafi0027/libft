/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:46:25 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/22 07:56:32 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	if (n == 0)
		return (dest);
	if (!src || !dest)
		return (NULL);
	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
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
