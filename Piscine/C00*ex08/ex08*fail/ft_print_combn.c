/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:06:19 by rakman            #+#    #+#             */
/*   Updated: 2024/03/21 13:40:53 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_digits(char *digits, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(digits[i] + 48);
		i++;
	}
}

void	increment_digits(char *digits, int n)
{
	int	i;

	i = n - 1;
	while (i >= 0 && digits[i] == 10 + i - n)
	{
		i--;
	}
	if (i >= 0)
	{
		digits[i]++;
		while (i < n)
		{
			digits[i + 1] = digits[i] + 1;
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	digits[10];

	while (digits[0] < 10 - n)
	{
		print_digits(digits, n);
		ft_putchar(',');
		ft_putchar(' ');
		increment_digits(digits, n);
	}
}

int	main(void)
{
	ft_print_combn(1);
}

/*
doesntwork
*/
