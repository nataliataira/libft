/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 04:31:06 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/06/21 21:27:52 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	if (len >= s_len)
		len = s_len - start;
	substr = (char *) malloc(sizeof (char) * (len + 1));
	if (!substr)
		return (NULL);
	s = s + start;
	while (i < len && *s)
		substr[i++] = *(char *)s++;
	substr[i] = '\0';
	return (substr);
}
