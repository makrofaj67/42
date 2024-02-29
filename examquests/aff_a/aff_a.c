#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*s1;

	s1 = argv[1];
	if (argc != 2)
	{
		write(1, "a\n", 2);
	}
	else
	{
		while (*s1 && (*s1 != 'a'))
		{
			s1++;
		}
		if (*s1 == 'a')
		{
			write(1, "a\n", 2);
		}
		else
		{
			write(1, "a\n", 2);
		}
	}
}
