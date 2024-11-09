/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:51:44 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 18:15:50 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
	ft_putstr_fd(s, fd);
}
/*
#include <fcntl.h>
void test_ft_putendl_fd()
{
	int fd;
	char buffer[2];
	ssize_t bytes_read;

	// Create and open a temporary file for writing
	fd = open("test_output.txt",O_RDWR | O_CREAT, 0644);
	if (fd == -1)
	{
		perror("Failed to open file");
		return;
	}

	// Test writing a character to the file
	ft_putendl_fd("bom dia meus grandes piciners\nWoo!", fd);

	// Reset file offset to the beginning
	close(fd);
}

int main()
{
	test_ft_putendl_fd();
	return 0;
}*/