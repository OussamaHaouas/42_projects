/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:07:36 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/16 20:17:09 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*vrl;
	size_t	i;

	i = 0;
	vrl = (char *)malloc(ft_strlen((char *)s1) + 1);
	if (!vrl)
		return (NULL);
	while (i < ft_strlen((char *)s1))
	{
		vrl[i] = s1[i];
		i++;
	}
	vrl[i] = '\0';
	return (vrl);
}
