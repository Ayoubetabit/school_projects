/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:12:55 by atabit            #+#    #+#             */
/*   Updated: 2025/10/22 23:23:08 by atabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	x;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", 10);
	if (n < 0)
	{
		write(fd, '-', 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10);
	}
	x = (n % 10) + '0';
	write(fd, &x, 1);
}


int main() {
    int fd; // Declare an integer to store the file descriptor

    // Open a file named "example.txt" for writing, creating it if it doesn't exist.
    // The third argument (0644) sets file permissions (read/write for owner, read-only for group/others).
    fd = open("example.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd == -1) {
        // Handle error if file opening fails
        perror("Error opening file");
        return 1;
    }

    // At this point, 'fd' holds the file descriptor for "example.txt".
    // You can now use 'fd' with functions like write(), read(), etc.
    printf("File opened successfully. File descriptor: %d\n", fd);
    ft_putnbr_fd(512, fd);
    // Close the file descriptor when you are finished with it.
    close(fd);

    return 0;
}
