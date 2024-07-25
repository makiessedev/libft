#include <unistd.h>
#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	FILE *file;
	file = fopen("makiesse", "w");
	ft_putchar_fd('M', fileno(file));
	ft_putchar_fd('a', fileno(file));
	fclose(file);
	return (0);
}
