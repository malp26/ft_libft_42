/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaylik@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 00:00:00 by mbaylik           #+#    #+#             */
/*   Updated: 2026/08/15 03:31:00 by mbaylik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	put_positive(long long n, int fd)
{
	char	digit;

	if (n >= 10)
		put_positive(n / 10, fd);
	digit = (char)('0' + n % 10);
	write(fd, &digit, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long long	value;

	value = n;
	if (value < 0)
	{
		write(fd, "-", 1);
		value = -value;
	}
	put_positive(value, fd);
}
#include <fcntl.h>
int main()
{
	int fd = open("test.txt", O_WRONLY | O_CREAT , 0645);
	ft_putnbr_fd(45, fd);
	close(fd);
}