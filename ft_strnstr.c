/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 04:25:58 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/06/24 20:13:54 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lit_len;

	lit_len = ft_strlen(little);
	if (!*little)
		return ((char *) big);
	while (*big && len-- >= lit_len)
	{
		if (*big == *little && ft_strncmp(big, little, lit_len) == 0)
			return ((char *) big);
		big++;
	}
	return (NULL);
}
