/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:56:34 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/25 08:23:25 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **p, int a)
	{
	int	i;

	i = 0;
	while (i < a)
	{
		free(p[i]);
		i++;
	}
	free(p);
}

static int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static int	action(char **array, const char *s, char c)
{
	const char	*j;
	int			a;

	a = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		j = s;
		while (*j != c && *j != '\0')
			j++;
		if (j > s)
		{
			array[a] = ft_substr(s, 0, j - s);
			if (array[a] == NULL)
			{
				ft_free(array, a);
				return (1);
			}
			s = j;
			a++;
		}
	}
	array[a] = NULL;
	return (0);
}

char	**ft_split(const char *s, char c)
{
	int		a;
	int		words;
	char	**array;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	a = action(array, s, c);
	if (a == 1)
		return (NULL);
	return (array);
}
