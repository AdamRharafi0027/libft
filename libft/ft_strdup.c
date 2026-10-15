/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:10:33 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/14 12:12:13 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	s_len;

	s_len = ft_strlen(s);
	dest = malloc(s_len + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s, s_len + 1);
	return (dest);
}
