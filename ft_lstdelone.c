/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomes-t <ngomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:06:45 by ngomes-t          #+#    #+#             */
/*   Updated: 2022/07/26 07:19:41 by ngomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*delete;

	if (!lst || !del)
		return ;
	delete = lst;
	lst = lst->next;
	del(delete->content);
	free(delete);
}
