#include <unistd.h>

void	ft_is_negative(int n)
{
	char negative = 'N';
	char positive = 'P';

	if (n >= 0)
	{
		write(1, &positive, 1);
	}
	else
	{
		write(1, &negative, 1);
	}
}
