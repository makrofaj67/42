#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		while (*argv[argc - 1])
		{
			write(1, argv[argc - 1], 1);
			argv[argc - 1]++;
		}
		write(1, "\n", 1);
	}
}
