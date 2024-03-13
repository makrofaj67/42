/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:39:32 by rakman            #+#    #+#             */
/*   Updated: 2024/03/12 20:02:48 by rakman           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0)
	{
		return
	}
	while (nb > 1)
	{
		result = ft_recursive_factorial(nb - 1) * nb;
		nb--;
	}
	return (result);
}
