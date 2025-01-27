/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:18:23 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/16 20:15:59 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*test;

	if (!lst)
		return (NULL);
	test = lst;
	while (test -> next != NULL)
		test = test -> next;
	if (test -> next == NULL)
		return (test);
	return (NULL);
}
