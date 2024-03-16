#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 68;
	while (i < 100)
	{
		printf ("\n%d ", i);
		printf ("%c", i);
		i++;
	}
}
