#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb_recursive(int comb[], int index, int n)
{
    int i;

    if (index == n)
    {
        i = 0;
        while (i < n)
        {
            ft_putchar(comb[i] + '0');
            i++;
        }
        if (comb[0] != 10 - n)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        return;
    }

    if (index == 0)
        i = 0;
    else
        i = comb[index - 1] + 1;

    while (i <= 9)
    {
        comb[index] = i;
        ft_print_comb_recursive(comb, index + 1, n);
        i++;
    }
}

void    ft_print_combn(int n)
{
    int comb[10];
    if (n > 0 && n < 10)
        ft_print_comb_recursive(comb, 0, n);
}

int     main(void)
{
    ft_print_combn(2);
    return (0);
}

