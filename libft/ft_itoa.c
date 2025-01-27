/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:33:10 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/23 12:50:02 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_compte_digits(long n)
{
	int	i;

	i = 1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_replace(char *result, int n, int digits, int a)
{
	int	r;
	int	j;

	r = 0;
	j = digits + a;
	if (a == 1)
	{
		result[0] = '-';
		digits++;
	}
	while (n > 9 && digits > 0)
	{
		r = n % 10;
		n = n / 10;
		result[digits - 1] = '0' + r;
		digits--;
	}
	result[digits - 1] = '0' + n;
	result[j] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*result;
	int		a;

	a = 0;
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		a++;
		n *= -1;
	}
	digits = ft_compte_digits(n);
	result = (char *)malloc(digits * sizeof(char) + a + 1);
	if (!result)
		return (NULL);
	ft_replace(result, n, digits, a);
	return (result);
}
