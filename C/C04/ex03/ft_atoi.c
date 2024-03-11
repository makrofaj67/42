#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int		i;
	char	*str;

	i = 0;
	while (i <= 127)
	{
		if (isspace(i))
		{
			str = "SPACE";
		}
		else
		{
			str = "NOT SPACE";
		}
		printf("%d is %s\n", i, str);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 1;
	while ((*str <= 13 || *str >= 9) || (*str == 32))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			i = i * -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = 10 * (*str - '0') + result;
		str++;
	}
	return (result * -1);
}
