#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char comb[3];
	
	comb[0] = '0';
	comb[1] = '1';
	comb[2] = '2';

	while (comb[0] <= '7')
	{
		if (comb[0] != comb[1] && comb[0] != comb[2] && comb[1] != comb[2])
		{
			write(1, comb, 3);
			if (!(comb[0] == '7' && comb[1] == '8' && comb[2] == '9'))
                        {
                                ft_putchar(',');
                                ft_putchar(' ');
                        }
		}

			comb[2]++;
			if (comb[2] > '9')
			{
				comb[2] = comb[1] + 1;
				comb[1]++;
			}
			if (comb[1] > '8')
			{
				comb[1] = comb[0] + 1;
				comb[0]++;
			}

	}

}

int	main(void)
{
	ft_print_comb();
	return 0;
}
