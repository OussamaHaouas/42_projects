/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:44:58 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/23 12:04:56 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	move(char *d, const char *s, size_t len)
{
	size_t	i;

	if (d > s)
	{
		i = len;
		while (len != 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	else if (d < s)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;

	if (dst == src || len == 0)
		return (dst);
	s = (const char *)src;
	d = (char *)dst;
	move(d, s, len);
	return (dst);
}
