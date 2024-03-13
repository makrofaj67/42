/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:39:33 by rakman            #+#    #+#             */
/*   Updated: 2024/03/12 19:44:01 by rakman           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 1)
	{
		result = nb * (nb - 1);
		nb--;
	}
	return (result);
}
