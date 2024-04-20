/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:28:14 by rakman            #+#    #+#             */
/*   Updated: 2024/03/03 21:33:41 by rakman           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptoarray;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		ptoarray = (int *)malloc(sizeof(int) * (max - min));
		i = 0;
		while (i < max - min)
		{
			ptoarray[i] = min + i;
			i++;
		}
		*range = ptoarray;
		return (max - min);
	}
}
