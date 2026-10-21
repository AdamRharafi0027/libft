/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:21:32 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/21 15:17:30 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	while (1)
	{
		if (s[s_len] == (unsigned char)c)
			return ((char *)&s[s_len]);
		if (s_len == 0)
			break ;
		s_len--;
	}
	return (NULL);
}
