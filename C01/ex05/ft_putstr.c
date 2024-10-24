#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index = 0;
	
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
}
