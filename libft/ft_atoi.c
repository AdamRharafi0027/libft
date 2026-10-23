/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 08:46:42 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/22 19:11:24 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_handle_overflow(long nbr, int digit, int sign)
{
	if (sign == 1)
	{
		if (nbr > (OVER_FLOW - digit) / 10)
			return (-1);
	}
	else
	{
		if (((unsigned long)nbr * 10) + digit > ((unsigned long)OVER_FLOW + 1))
			return (0);
	}
	return (-2);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	long	result;
	int		sign;
	int		digit;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = str[i] - '0';
		if (ft_handle_overflow(result, digit, sign) != -2)
			return (ft_handle_overflow(result, digit, sign));
		result = result * 10 + (digit);
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str[] = "-9223372036854775808";

// 	printf("ft_atoi: %d\n", ft_atoi(str));
// 	printf("atoi: %d\n", atoi(str));
// }
