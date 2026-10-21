/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:10:33 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/21 07:46:56 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	dest = malloc(s_len + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s, s_len + 1);
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
	// char *dest = strdup(NULL);
	// printf("strdup: %s\n", dest);

	// char *dest2 = ft_strdup(NULL);
	// printf("ft_strdup: %s\n", dest2);
// }
