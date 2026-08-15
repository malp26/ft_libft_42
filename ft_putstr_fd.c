/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaylik@student.42istanbul.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 00:00:00 by mbaylik           #+#    #+#             */
/*   Updated: 2026/08/15 03:31:12 by mbaylik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
#include <fcntl.h>
int main(void)
{
	int fd;

	
	fd = open("test.txt", O_WRONLY | O_CREAT , 0777);
	printf("%d\n",fd);
	ft_putstr_fd("deneme", fd);
	close(fd);
	ft_putstr_fd(" ekstra", fd);
	printf("%d\n",fd);
	
	
	
	
	return(0);
}