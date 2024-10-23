#include <unistd.h>


void	ft_putnbr(int nb)
{
	char nbChar;
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
	}
	nbChar = (nb % 10) + '0';
	write(1, &nbChar, 1);
}

int	main(void)
{
	ft_putnbr(42);
	return 0;
}
