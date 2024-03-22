/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:09:29 by rakman            #+#    #+#             */
/*   Updated: 2024/03/22 22:24:03 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	number_to_try;

	number_to_try = 0;
	while (number_to_try * number_to_try <= nb)
	{
		number_to_try++;
	}
	number_to_try--;
	if (number_to_try * number_to_try == nb)
	{
		return (number_to_try);
	}
	else
	{
		return (0);
	}
}
