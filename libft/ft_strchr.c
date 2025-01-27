/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:12:41 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/17 10:34:41 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		j;
	int			i;

	j = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == j)
			return ((char *) &s[i]);
		i++;
	}
	if (j == s[i])
		return ((char *) &s[i]);
	return (NULL);
}
