/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 08:30:16 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/23 12:03:21 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	if (size != 0 && (count > ((size_t)-1) / size))
		return (NULL);
	p = (char *)malloc(size * count);
	if (!p)
		return (NULL);
	ft_memset(p, 0, size * count);
	return (p);
}
