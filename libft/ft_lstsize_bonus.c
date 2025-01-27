/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:05:55 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/25 08:33:05 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*test;
	int		i;

	i = 0;
	test = lst;
	if (!lst)
		return (0);
	while (test)
	{
		test = test -> next;
		i++;
	}
	return (i);
}
