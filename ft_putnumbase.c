/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:52:12 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/12/08 19:53:55 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnum_base(unsigned long number, char *base)
{
	size_t	len_base;

	len_base = ft_strlen(base);
	if (number / len_base > 0)
		ft_putnum_base(number / len_base, base);
	ft_putchar(base[number % len_base]);
}
