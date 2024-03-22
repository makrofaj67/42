/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_the_ten_.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:35:08 by rakman            #+#    #+#             */
/*   Updated: 2024/03/17 19:43:47 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	board[10];

int	is_attack(int i, int j)
{
	int k, l;
	for (k = 0; k < i; k++)
	{
		if (j == board[k] || (abs(board[k] - j) == abs(i - k)))
		{
			return (1);
		}
	}
	return (0);
}

int	N_queen(int n)
{
	static int	count;
	char		c;

	int i, j;
	for (i = 0; i < 10; i++)
	{
		if (!is_attack(n, i))
		{
			board[n] = i;
			if (n == 9)
			{
				for (j = 0; j < 10; j++)
				{
					c = board[j] + '0';
					write(1, &c, 1);
				}
				write(1, "\n", 1);
				count++;
			}
			else
			{
				N_queen(n + 1);
			}
		}
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	return (N_queen(0));
}
