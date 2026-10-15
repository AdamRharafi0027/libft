/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 09:27:49 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/14 10:07:56 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*dest;

	if (nmemb == 0 || size == 0)
	{
		dest = malloc(1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	if (nmemb > __SIZE_MAX__ / size)
	{
		return (NULL);
	}
	total = nmemb * size;
	dest = malloc(total);
	if (!dest)
		return (NULL);
	ft_bzero(dest, total);
	return (dest);
}
