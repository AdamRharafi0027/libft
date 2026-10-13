/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:13:25 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/13 18:26:06 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*s_ptr;

	i = 0;
	s_ptr = (unsigned const char *)s;
	while (i < n)
	{
		if (s_ptr[i] == (unsigned char)c)
			return ((void *) &s_ptr[i]);
		i++;
	}
	return (NULL);
}
