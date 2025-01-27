/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:51:10 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/23 15:31:25 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*vrl1;
	const unsigned char	*vrl2;
	size_t				i;

	vrl1 = s1;
	vrl2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && vrl1[i] == vrl2[i])
		i++;
	return (vrl1[i] - vrl2[i]);
}
