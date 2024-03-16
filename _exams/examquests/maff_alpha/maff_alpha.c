#include <unistd.h>

int	main(void)

{
	char c;
	char to_write;

	c = 'a';
	while (c <= 'z')
	{
		to_write = c;
		if (c % 2 == 0)
			to_write = to_write - 32;
		write(1, &to_write, 1);
		c++;
	}
	write(1, "\n", 1);
}
