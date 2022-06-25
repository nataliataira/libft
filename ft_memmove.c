/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:00:28 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/06/16 04:39:03 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	d = (char *)dest;
	s = (char *)src;
	if (s < d)
	{
		i = n - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
		return (dest);
	}
	else
	{
		ft_memcpy(dest, src, n);
		return (dest);
	}
}
