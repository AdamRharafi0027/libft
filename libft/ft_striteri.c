/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharafi <arharafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 08:48:54 by arharafi          #+#    #+#             */
/*   Updated: 2026/10/16 09:03:41 by arharafi         ###   ########.fr       */
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
