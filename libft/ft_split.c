/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:46:28 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/22 08:26:22 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_is_sep(char c, char sep)
{
	return (c == sep);
}

static size_t	ft_get_size(char const *str, char sep)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (str[i])
	{
		if (!ft_is_sep(str[i], sep) && (i == 0 || ft_is_sep(str[i - 1], sep)))
			size++;
		i++;
	}
	return (size);
}

static size_t	ft_count_words(const char *str, char sep, size_t start)
{
	size_t	w_count;

	w_count = 0;
	while (str[start + w_count] && !ft_is_sep(str[start + w_count], sep))
		w_count++;
	return (w_count);
}

static void	*ft_free_all(char **dest, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(dest[i]);
		i++;
	}
	free(dest);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**dest;

	if (!s)
		return (NULL);
	dest = malloc((ft_get_size(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_get_size(s, c))
	{
		while (s[j] && ft_is_sep(s[j], c))
			j++;
		dest[i] = ft_substr(s, j, ft_count_words(s, c, j));
		if (!dest[i])
			return (ft_free_all(dest, ft_get_size(s, c)));
		j += ft_count_words(s, c, j) + 1;
		i++;
	}
	dest[i] = NULL;
	return (dest);
}
