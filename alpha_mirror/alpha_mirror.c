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
			if (*s1 >= 'a' && *s1 <= 'm')
			{
				*s1 = 'm' + 'm' - *s1 + 1;
			}
			else if (*s1 >= 'm' && *s1 <= 'z')
			{
				*s1 = 'm' + 'm' - *s1 + 1;
			}
			else if (*s1 >= 'A' && *s1 <= 'M')
			{
				*s1 = 'M' + 'M' - *s1 + 1;
			}
			else if (*s1 >= 'M' && *s1 <= 'Z')
			{
				*s1 = 'M' + 'M' - *s1 + 1;
			}
			write(1, s1, 1);
			s1++;
		}
		write(1, "\n", 1);
	}
}
