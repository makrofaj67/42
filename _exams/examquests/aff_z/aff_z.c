#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*s1;

	s1 = argv[1];
	if (argc != 2)
	{
		write(1, "z\n", 2);
	}
	else
	{
		while (*s1 && (*s1 != 'z'))
		{
			s1++;
		}
		if (*s1 == 'z')
		{
			write(1, "z\n", 2);
		}
		else
		{
			write(1, "z\n", 2);
		}
	}
}
