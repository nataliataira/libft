/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 02:34:57 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/06/25 03:03:12 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int	ft_count_dig(int n)
{
	int	i;

	i = 1;
	while (n < -9 || n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;
	int		is_neg;

	digits = ft_count_dig(n);
	is_neg = 0;
	if (n < 0)
		is_neg = 1;
	str = (char *)malloc(sizeof(char) * (digits + is_neg + 1));
	if (is_neg)
		str[0] = '-';
	str[digits + is_neg] = '\0';
	while (digits > 0)
	{
		str[digits + is_neg - 1] = ft_abs(n % 10) + '0';
		n /= 10;
		digits--;
	}
	return (str);
}
