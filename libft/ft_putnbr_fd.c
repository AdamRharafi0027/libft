/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:05:03 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/24 16:33:42 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_copy_num(char *dest, long number)
{
	size_t	i;

	i = 0;
	while (number)
	{
		dest[i++] = (number % 10) + '0';
		number /= 10;
	}
	return (i);
}

static void	ft_print_end(char *str, size_t end, int fd)
{
	while (end-- > 0)
		write(fd, &str[end], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	size_t	i;
	char	tab[11];
	long	number;

	number = (long)n;
	if (number == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (number < 0)
	{
		number *= -1;
		write(fd, "-", 1);
	}
	i = ft_copy_num(tab, number);
	ft_print_end(tab, i, fd);
}
