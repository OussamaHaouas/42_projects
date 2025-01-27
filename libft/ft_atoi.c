/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:34:31 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/23 12:06:35 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	n;
	long	holder;
	int		signe;

	n = 0;
	signe = 1;
	holder = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			signe = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		n = (n * 10) + (*str - 48);
		if (n < holder)
			return (- (signe + 1) / 2);
		holder = n;
		str++;
	}
	return (signe * n);
}
