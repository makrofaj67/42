char	*ft_strupcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
	return (tmp);
}
