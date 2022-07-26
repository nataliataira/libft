/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:42:49 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/07/26 07:30:51 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*hold_next;

	while (*lst != NULL)
	{
		hold_next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = hold_next;
	}
	*lst = NULL;
}
