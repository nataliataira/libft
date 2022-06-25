/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 03:15:48 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/06/23 00:56:11 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	aux;
	char	*str;

	aux = 0;
	str = (char *)s;
	if (c > 127)
		c %= 256;
	while (aux < n)
	{
		if (*str == c)
			return (str);
		str++;
		aux++;
	}
	return (0);
}
