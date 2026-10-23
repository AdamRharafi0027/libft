/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:19:37 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/22 08:26:51 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_num_size(long number)
{
	size_t	i;

	i = 0;
	if (number < 0)
		number *= -1;
	if (number == 0)
		return (1);
	while (number)
	{
		i++;
		number = number / 10;
	}
	return (i);
}

static void	ft_implement_str(char *dest, long number, size_t len, int sign)
{
	dest[len] = '\0';
	while (len > 0)
	{
		dest[--len] = (number % 10) + 48;
		number /= 10;
		if (sign)
			dest[0] = '-';
	}
}

char	*ft_itoa(int n)
{
	char	*dest;
	long	number;
	int		sign;
	size_t	num_len;

	sign = 0;
	number = (long)n;
	num_len = 0;
	if (number < 0)
	{
		number *= -1;
		sign = 1;
		num_len++;
	}
	num_len += ft_get_num_size(number);
	dest = malloc(num_len + 1);
	if (!dest)
		return (NULL);
	ft_implement_str(dest, number, num_len, sign);
	return (dest);
}
