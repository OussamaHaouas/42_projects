/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:06:24 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/24 15:11:21 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*vrl;
	size_t	j;
	size_t	i;

	i = start;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen((char *)s) || len == 0)
		return (ft_strdup(""));
	if (len > ft_strlen((char *)s))
		len = ft_strlen((char *)s) - start;
	vrl = (char *)malloc(len + 1);
	if (!vrl)
		return (NULL);
	if (s[i] != '\0')
	{
		while ((i + j) < i + (len))
		{
			vrl[j] = s[i + j];
			j++;
		}
		vrl[j] = '\0';
	}
	return (vrl);
}
