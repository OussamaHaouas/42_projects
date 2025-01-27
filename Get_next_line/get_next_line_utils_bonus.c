/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 17:03:52 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/12/25 09:08:23 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	ft_strchr(const char *s, int c)
{
	char		j;
	int			i;

	if (!s)
		return ('\0');
	j = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == j)
			return (s[i]);
		i++;
	}
	if (s[0] == '\0')
		return ('\0');
	return ('F');
}

size_t	ft_strlen(const char *s)
{
	size_t	loop;

	loop = 0;
	if (!s)
		return (0);
	while (s[loop] != '\0')
		loop++;
	return (loop);
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

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		return (ft_strdup(s2));
	rsl = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!rsl)
		return (NULL);
	rsl = ft_replace(s1, s2, rsl);
	free((char *)s1);
	s1 = NULL;
	return (rsl);
}

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
