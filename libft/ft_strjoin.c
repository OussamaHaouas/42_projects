/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:21:41 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/24 14:56:44 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_null(char const *s1, char const *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (ft_strdup(""));
	else if (s1 == NULL)
		return (ft_strdup(s2));
	else if (s2 == NULL)
		return (ft_strdup(s1));
	else
		return (NULL);
}

static char	*ft_replace(char const *s1, char const *s2, char *rsl)
{
	size_t		i;
	size_t		c;

	i = 0;
	c = 0;
	while (s1[i] != '\0')
	{
		rsl[c] = s1[i];
		c++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		rsl[c] = s2[i];
		c++;
		i++;
	}
	rsl[c] = '\0';
	return (rsl);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rsl;
	char	*a;

	a = ft_null(s1, s2);
	if (a != NULL)
		return (a);
	rsl = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!rsl)
		return (NULL);
	rsl = ft_replace(s1, s2, rsl);
	return (rsl);
}
