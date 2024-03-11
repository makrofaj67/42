#include <stdio.h>
#include <unistd.h>

int	ft_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

void	ft_make_lower(char c)
{
	if (ft_is_uppercase(c) == 1)
	{
		c = c - 32;
	}
}

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_is_alpha_numeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	ft_make_lower(str);
	return (str);
}

int	main(void)
{
	char	deneme[8];
	char	c;

	deneme[8] = "FFGalem";
	while (*deneme)
	{
		c = *deneme;
		ft_make_lower(c);
		write(1, deneme, 1);
		deneme++;
	}
}
