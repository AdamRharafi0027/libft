/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:39:52 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/22 16:05:40 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	char			*s_ptr;

	s_ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		s_ptr[i] = (char)c;
		i++;
	}
	return (s);
}
