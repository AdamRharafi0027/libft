/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 08:48:54 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/21 10:08:00 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	s_len;

	if (!s || !f)
		return ;
	i = 0;
	s_len = ft_strlen(s);
	while (i < s_len)
		f(i++, s++);
}

// #include <stdio.h>

// static void to_upper_even(unsigned int i, char *c)
// {
// 	if (i % 2 == 0 && (*c >= 'a' && *c <= 'z'))
// 		*c -= 32;
// }

// int main(void)
// {
// 	char str1[] = "hello world";
// 	ft_striteri(str1, to_upper_even);
// 	printf("ft_striteri:  %s\n", str1);
// }
