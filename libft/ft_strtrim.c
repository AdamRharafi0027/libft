/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:01:27 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/21 09:44:56 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_get_index(char const *str, char const *set, int reverse)
{
	size_t	i;

	if (reverse == 0)
	{
		i = 0;
		while (str[i] && ft_is_set(str[i], set))
			i++;
		if (str[i] == '\0')
			return (-1);
		return (i);
	}
	i = ft_strlen(str);
	while (i > 0)
	{
		i--;
		if (!ft_is_set(str[i], set))
			return (i);
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = ft_get_index(s1, set, 0);
	if (start == -1)
		return (ft_substr(s1, 0, 0));
	end = ft_get_index(s1, set, 1);
	len = (end - start + 1);
	return (ft_substr(s1, start, len));
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char *dest = ft_strtrim("ssss", NULL);
// 	printf("ft_strtrim: %s\n", dest);
// }
