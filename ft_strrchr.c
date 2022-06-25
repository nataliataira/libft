/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 05:03:07 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/06/03 05:31:18 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	if (c > 127)
		c %= 256;
	len = ft_strlen(str);
	while (*str != '\0')
		str++;
	while (len >= 0)
	{
		if (*str == c)
			return ((char *)str);
		len--;
		str--;
	}
	return (NULL);
}
