#include <unistd.h>

int	main(int argc, char **argv)

{
	char *s1;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		s1 = argv[1];
		while (*s1)
		{
			if (*s1 >= 'a' && *s1 <= 'z')
			{
				*s1 = 'a' + (*s1 - 'a' + 1) % 26;
			}
			else if (*s1 >= 'A' && *s1 <= 'Z')
			{
				*s1 = 'A' + (*s1 - 'A' + 1) % 26;
			}
			write(1, s1, 1);
			s1++;
		}
		write(1, "\n", 1);
	}
}
