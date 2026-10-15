/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:46:28 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/15 16:12:48 by arharafi         ###   ########.fr       */
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

static void	ft_free_all(char **dest, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(dest[i]);
		i++;
	}
	free(dest);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	x;
	char	**dest;

	dest = malloc((ft_get_size(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_get_size(s, c))
	{
		while (s[j] && ft_is_sep(s[j], c))
			j++;
		dest[i] = malloc(ft_count_words(s, c, j) + 1);
		if (dest[i] == NULL)
			ft_free_all(dest, i);
		x = 0;
		while (x < ft_count_words(s, c, j))
			dest[i][x++] = s[j + x];
		dest[i++][x] = '\0';
		j += ft_count_words(s, c, j);
	}
	dest[i] = NULL;
	return (dest);
}

// #include <stdio.h>

// int	main()
// {
// 	char **result = ft_split(",,,Hello,,World,1337,,,", ',');
// 	int i = 0;
// 	size_t	size = ft_get_size(",,,Hello,,World,1337,,,", ',');
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// }
/*
	ft_split("Hello,world,1337", ',');


	Expected result:
	result[0] = "Hello"
	result[1] = "world"
	result[2] = "1337"
	result[3] = NULL
*/
