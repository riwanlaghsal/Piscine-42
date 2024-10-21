#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char lettre = 'a';

	while (lettre != 'z' + 1)
	{
		ft_putchar(lettre);
		lettre++;
	}
}

int 	main(void)
{
	ft_print_alphabet();
	return 0;
}
