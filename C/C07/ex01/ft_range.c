/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:56:26 by rakman            #+#    #+#             */
/*   Updated: 2024/03/02 21:17:27 by rakman           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*pp;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	else
	{
		pp = (int *)malloc((max - min) * sizeof(int));
		i = 0;
		while (i < max - min)
		{
			pp[i] = max - min - 1 + i;
			i++;
		}
		return (pp);
	}
}
