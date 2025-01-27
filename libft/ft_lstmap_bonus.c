/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:21:11 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/23 12:35:12 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*test;
	t_list	*rest;

	if (!lst || !f || !del)
		return (NULL);
	test = NULL;
	while (lst)
	{
		rest = ft_lstnew(f(lst -> content));
		if (!rest)
		{
			ft_lstclear(&test, del);
			return (NULL);
		}
		if (test == NULL)
			test = rest;
		ft_lstadd_back(&test, rest);
		lst = lst -> next;
	}
	return (test);
}
