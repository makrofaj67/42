/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:39:28 by rakman            #+#    #+#             */
/*   Updated: 2024/03/12 19:39:38 by rakman           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power >= 1)
	{
		result = ft_recursive_power(nb, power--) * nb;
	}
	return (result);
}