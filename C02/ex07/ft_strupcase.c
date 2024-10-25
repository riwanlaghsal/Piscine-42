char	*ft_strupcase(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return str;
}
