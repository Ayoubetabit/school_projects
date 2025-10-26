#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
    char    *s2 = "abc";
    int     fd;
    fd = open("file.txt", O_WRONLY | O_CREAT);
    if (fd == -1)
        return (0);
    ft_putstr_fd(s2, fd);
    ft_putchar_fd('\n', fd);
    ft_putendl_fd(s2, fd);
    ft_putnbr_fd(237348924, fd);
    close(fd);
}
