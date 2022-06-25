/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 20:53:20 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/06/23 19:26:03 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	t_size;

	t_size = nmemb * size;
	if (t_size > 2147483647 || (size > __SIZE_MAX__ / nmemb))
		return (NULL);
	ptr = malloc(t_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, t_size);
	return (ptr);
}
