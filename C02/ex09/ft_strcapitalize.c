char	*ft_strcapitalize(char *str)
{
	if ('a' <= str[0] && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}	
	int i = 1;
	while (str[i] != '\0')
	{
		if ((str[i-1] < 'A' || str[i-1] > 'Z') && (str[i-1] < 'a' || str[i-1] > 'z'))
		{
			if ('a' <= str[i] && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else
		{
			if ('A' <= str[i] && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
		i++;
}
	return str;
}
