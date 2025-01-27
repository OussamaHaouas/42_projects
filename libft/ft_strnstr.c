/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:25:36 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/26 14:36:17 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_short(char *vrl1, char *vrl2, size_t n, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = -1;
	while (i <= len - n)
	{
		k = 0;
		while (vrl1[i + k] == vrl2[k] && k < n)
			k++;
		if (k == n)
		{
			j = i;
			return (j);
		}
		i++;
	}
	return (j);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*vrl1;
	char		*vrl2;
	size_t		n;
	int			j;

	vrl1 = (char *)haystack;
	vrl2 = (char *)needle;
	n = ft_strlen(vrl2);
	if (n == 0)
		return (&vrl1[n]);
	if (len == 0 || vrl1[0] == '\0' || len < (size_t)n)
		return (NULL);
	j = ft_short(vrl1, vrl2, n, len);
	if (j != -1)
		return (&vrl1[j]);
	return (NULL);
}
