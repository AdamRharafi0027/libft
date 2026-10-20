/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 08:46:42 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/20 10:38:22 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_handle_oveflow(long nbr, int sign)
{
	if (nbr > MAX_MULTIPLY)
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
}

int	ft_atoi(const char *str)
{
	size_t	i;
	long	result;
	int		sign;

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
		if (result > MAX_MULTIPLY || result < -MAX_MULTIPLY)
			return (ft_handle_oveflow(result, sign));
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
#include <string.h>
#include <stdio.h>
int main()
{
	char str[] = "-9223372036854775805";
	printf("%d\n", 	ft_atoi(str));
	printf("%d\n", 	   atoi(str));
}
/*


9223372036854775807

*/
