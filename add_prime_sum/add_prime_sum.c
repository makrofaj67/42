#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nbr(int nbr)
{
	if (nbr > 9)
	{
		ft_print_nbr(nbr / 10);
		ft_print_nbr(nbr % 10);
	}
	if (nbr <= 9)
		ft_putchar(nbr + '0');
}

int	find_primes_and_sum_them(int n1)
{
	int	number_to_try;
	int	is_prime;
	int	result;

	result = 0;
	while (n1 >= 2)
	{
		is_prime = 1;
		number_to_try = 2;
		while (number_to_try * number_to_try <= n1)
		{
			if ((n1 % number_to_try) == 0)
			{
				is_prime = 0;
				break ;
			}
			number_to_try++;
		}
		if (is_prime == 1)
		{
			result += n1;
		}
		n1--;
	}
	return (result);
}

int	return_integer(char *s1)
{
	int	result;

	result = 0;
	while (*s1)
	{
		result = result * 10 + (*s1 - '0');
		s1++;
	}
	return (result);
}

int	is_integer_or_empty(char *s1)

{
	if (*s1 == 0)
		return (0);
	while (*s1)
	{
		if (!(*s1 >= '0' && *s1 <= '9'))
			return (0);
		s1++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	number_to_work;
	int	result;

	if (argc != 2)
	{
		write(1, "0\n", 2);
	}
	else if (is_integer_or_empty(argv[1]) == 0)
	{
		write(1, "0\n", 2);
	}
	else
	{
		number_to_work = return_integer(argv[1]);
		if (number_to_work == 0 || number_to_work == 1)
			write(1, "0\n", 2);
		else
		{
			result = find_primes_and_sum_them(number_to_work);
			ft_print_nbr(result);
			write(1, "\n", 1);
		}
	}
}
