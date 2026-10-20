/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:58:53 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/20 17:24:35 by arharafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char str[] = "hello";
// 	int a = 5;
// 	bzero(str, 6);
// 	printf("bzero: %s\n", str);

// 	char str1[] = "hello";
// 	int b = 5;
// 	ft_bzero(str1, 6);
// 	printf("ft_bzero: %s\n", str1);
// }
