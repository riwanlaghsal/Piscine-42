#include <unistd.h>

void 	ft_print_numbers(void)
{
	int nb = '0';
	while (nb <= '9')
	{
		write(1, &nb, 1);
		nb++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return 0;
}
