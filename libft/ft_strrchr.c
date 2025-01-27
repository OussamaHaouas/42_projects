/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:32:27 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/24 15:02:04 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		j;
	size_t		i;

	j = (char) c;
	i = ft_strlen(s);
	while (i != 0)
	{
		if (s[i] != j)
			i--;
		else
			return ((char *) &s[i]);
	}
	if (j == s[i])
		return ((char *) &s[i]);
	return (NULL);
}
