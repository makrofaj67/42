#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	a;

	a = nb;
	if (a < 0)
	{
		a = -a;
		write(1, "-", 1);
	}
	else
	{
		if (a > 9)
		{
			ft_putnbr(a / 10);
			ft_putnbr(a % 10);
		}
		else if (a <= 9)
		{
			ft_putchar(a);
		}
	}
}
