/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:06:55 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 18:09:37 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnr_fd(int n, int fd)
{
	char	c;

	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
	}
	if (n < 0)
	{
		write(fd, ('-', fd), 1);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnr_fd((n / 10), fd);
		ft_putnr_fd((n % 10 + '0'), fd);
	}
	else
	{
		c = n + '0';
		write(fd, (n + '0'), 1);
	}
}
/*
#include <fcntl.h>
void test_ft_putnr_fd()
{
	int fd;
	char buffer[2];
	ssize_t bytes_read;

	// Create and open a temporary file for writing
	fd = open("test_output.txt",O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Failed to open file");
		return;
	}

	// Test writing a character to the file
	long int x = -84923849038204923809238490234;
	ft_putnr_fd(x, fd);

	// Reset file offset to the beginning
	close(fd);
}

#include <fcntl.h>
int main()
{
	test_ft_putnr_fd();
	return 0;
}*/