/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:25:59 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/21 09:58:06 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	size_t	i;
	char	*dest;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	dest = malloc(s_len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// char upper(unsigned	int index , char c)
// {
// 	(void) index;
// 	if (c >= 'a' && c <= 'z')
// 		return (c -= 32);
// 	return (c);
// }

// int main()
// {
// 	char *dest;
// 	dest = ft_strmapi("kkssk s ", NULL);
// 	printf("ft_strmapi: %s\n", dest);
// }
