/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:52:11 by rakman            #+#    #+#             */
/*   Updated: 2024/03/17 19:55:00 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_is_valid_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
		{
			return (0);
		}
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr(int nb, char *base, int length)
{
	long	a;

	a = nb;
	if (a < 0)
	{
		a = -a;
		write(1, "-", 1);
	}
	if (a > length)
	{
		ft_putnbr(a / length, base, length);
		ft_putnbr(a % length, base, length);
	}
	else if (a <= length)
	{
		write(1, &base[a], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_is_valid_base(base))
	{
		ft_putnbr(nbr, base, ft_strlen(base));
	}
	else
		write(1, "11", 0);
}
