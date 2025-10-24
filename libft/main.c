#include <fcntl.h>
#include "libft.h"

int main (){
	int fd = open ("file.txt" , O_WRONLY | O_CREAT , 0761);
	if (fd == -1)
		return -1;
	ft_putnbr_fd (123, fd);
	close (fd);
}