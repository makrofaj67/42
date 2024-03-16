#include <unistd.h>

void	ft_repeat_alpha(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			i = *str - 64;
		else if (*str >= 'a' && *str <= 'z')
			i = *str - 96;
		else
			i = 1;
		while (i > 0)
		{
			write(1, str, 1);
			i--;
		}
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		ft_repeat_alpha(argv[1]);
		write(1, "\n", 1);
	}
}
