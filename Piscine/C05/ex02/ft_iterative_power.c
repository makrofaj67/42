/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:39:30 by rakman            #+#    #+#             */
/*   Updated: 2024/03/12 19:39:38 by rakman           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power >= 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}