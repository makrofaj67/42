#include <stdio.h>

int	main(void)
{
	char	a;
	int		i;

	i = 1;
	a = 'a';
	while (a <= 'z')
	{
		printf("%d.harf = %c\n", i, a);
		a++;
		i++;
	}
}
