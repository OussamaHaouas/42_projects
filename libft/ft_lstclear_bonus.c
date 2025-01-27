/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:18:04 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/16 20:15:41 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*test;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		test = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = test;
	}
	*lst = NULL;
}
