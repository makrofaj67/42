#include <unistd.h>

int	main(int argc, char **argv)

{
	char *s1;
	int i;

	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		s1 = argv[1];
		i = 0;

		while (*(s1 + i))
		{
			i++;
		}
		i = i - 1;
		while (i >= 0)
		{
			write(1, (s1 + i), 1);
			i--;
		}
		write(1, "\n", 1);
	}
}
