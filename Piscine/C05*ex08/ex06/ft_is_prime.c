/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:25:24 by rakman            #+#    #+#             */
/*   Updated: 2024/03/22 22:29:30 by rakman           ###   ########.fr       */
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
