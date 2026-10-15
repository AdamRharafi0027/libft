/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:19:37 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/15 17:59:59 by arharafi         ###   ########.fr       */
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

/*
#include <stdio.h>
int main()
{
	char *res1 = ft_itoa(123);
	printf("Test 1 (123) => %s\n", res1);
	free(res1);

	char *res2 = ft_itoa(-123);
	printf("Test 2 (-123) => %s\n", res2);
	free(res2);

	char *res3 = ft_itoa(0);
	printf("Test 3 (0) => %s\n", res3);
	free(res3);

	char *res4 = ft_itoa(2147483647);
	printf("Test 4 (2147483647) => %s\n", res4);
	free(res4);

	char *res5 = ft_itoa(-2147483648);
	printf("Test 5 (-2147483648) => %s\n", res5);
	free(res5);
}
*/
