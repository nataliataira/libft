/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 01:42:23 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/12/12 01:45:48 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_htoi(char *hex)
{
	int	value;
	int	i;

	value = 0;
	i = 0;
	if (hex[i] == '0' && (hex[i + 1] == 'x' || hex[i + 1] == 'X'))
		i += 2;
	while (hex[i])
	{
		if (value > INT_MAX)
			return (0);
		else if (hex[i] >= '0' && hex[i] <= '9')
			value = value * 16 + hex[i] - '0';
		else if (hex[i] >= 'A' && hex[i] <= 'F')
			value = value * 16 + hex[i] - 'A' + 10;
		else if (hex[i] >= 'a' && hex[i] <= 'f')
			value = value * 16 + hex[i] - 'a' + 10;
		else
			return (0);
		i++;
	}
	return (value);
}