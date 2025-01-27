/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:22:14 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/25 11:43:30 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*string;
	char	charecter;
	size_t	n;

	string = (char *)b;
	charecter = (char)c;
	n = 0;
	while (n < len)
	{
		string[n] = charecter;
		n++;
	}
	return (b);
}
