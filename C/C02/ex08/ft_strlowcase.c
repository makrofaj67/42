char	*ft_strlowcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
	return (tmp);
}
