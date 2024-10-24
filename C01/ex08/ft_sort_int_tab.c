void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int i;
	int sorted;

	while (1)
	{
		sorted = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i +1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
		if (sorted)
			break;
	}
}
