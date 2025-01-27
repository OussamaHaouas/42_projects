/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 08:25:14 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/26 14:38:12 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_opearation(char const *s1, char const *set, int k, char *vrl)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	while (s1[i] && (ft_strchr(set, s1[i])))
		i++;
	c = i;
	while (i <= c + k - 1)
		vrl[j++] = s1[i++];
	vrl[j] = '\0';
	return (vrl);
}

static int	ft_num(char const *s1, char const *set, int d)
{
	size_t	i;
	int		j;
	size_t	c;

	i = 0;
	j = 0;
	while (s1[i] && (j < d && ft_strchr(set, s1[i])))
		i++;
	c = i;
	i = ft_strlen(s1);
	while (i > c && ft_strchr(set, s1[i]))
		i--;
	if (i - c != 0)
		return (i - c + 1);
	else
		return (i - c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*vrl;
	int		d;
	int		k;

	d = 0;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	while (set[d] != '\0')
		d++;
	k = ft_num(s1, set, d);
	vrl = (char *)malloc(k + 1);
	if (!vrl)
		return (NULL);
	vrl = ft_opearation(s1, set, k, vrl);
	return (vrl);
}
