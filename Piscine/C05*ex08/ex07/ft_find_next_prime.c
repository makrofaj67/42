/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:34:42 by rakman            #+#    #+#             */
/*   Updated: 2024/03/22 22:41:32 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	number_to_try;

	if (nb <= 1)
	{
		return (0);
	}
	number_to_try = 2;
	while (number_to_try * number_to_try <= nb)
	{
		if (nb % number_to_try == 0)
		{
			return (0);
		}
		number_to_try++;
	}
	return (1);
}

int	ft_next_prime(int nb)
{
	int	is_prime;

	is_prime = 0;
	while (is_prime == 0)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		else
		{
			nb++;
		}
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	else
	{
		return (ft_next_prime(nb));
	}
}
