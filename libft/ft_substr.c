/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:22:11 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/24 16:24:19 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t n1, size_t n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			s_len;
	size_t			actual_len;
	char			*dest;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		actual_len = 0;
	else
		actual_len = ft_min(len, s_len - start);
	dest = malloc((actual_len)+1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < actual_len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
