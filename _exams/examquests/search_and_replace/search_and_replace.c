#include <unistd.h>

int	ft_strlen(char *str)

{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
	}
	else
	{
		if (ft_strlen(argv[3]) > 1 || ft_strlen(argv[2]) > 1)
		{
			write(1, "\n", 1);
		}
		else
		{
			while (*argv[1])
			{
				if (*argv[1] == *argv[2])
				{
					*argv[1] = *argv[3];
				}
				write(1, argv[1], 1);
				argv[1]++;
			}
			write(1, "\n", 1);
		}
	}
}
