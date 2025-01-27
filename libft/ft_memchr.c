/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:17:06 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/25 11:54:41 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*buff;
	unsigned char		k;
	size_t				i;

	buff = (unsigned char *)s;
	k = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (buff[i] == k)
		{
			return ((void *) &buff[i]);
		}
		i++;
	}
	return (NULL);
}
