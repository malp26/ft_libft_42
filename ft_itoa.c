/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaylik@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 00:00:00 by mbaylik           #+#    #+#             */
/*   Updated: 2026/08/15 03:26:14 by mbaylik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	number_length(long long n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*number;
	long long	value;
	size_t		len;

	value = n;
	len = number_length(value);
	number = (char *)malloc(len + 1);
	if (!number)
		return (NULL);
	number[len] = '\0';
	if (value < 0)
	{
		number[0] = '-';
		value = -value;
	}
	while (value >= 10)
	{
		number[--len] = (char)('0' + value % 10);
		value /= 10;
	}
	number[--len] = (char)('0' + value);
	return (number);
}
