/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 08:33:09 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/23 12:44:57 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	j = 0;
	k = 0;
	i = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
		return (i);
	j = ft_strlen(dst);
	l = i + j;
	if (dstsize <= j)
		return (i + dstsize);
	else if (j <= dstsize)
	{
		while ((j + k) < (dstsize - 1) && src[k] != '\0')
		{
			dst[j + k] = src[k];
			k++;
		}
		dst[j + k] = '\0';
	}
	return (l);
}
