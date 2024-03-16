/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:56:26 by rakman            #+#    #+#             */
/*   Updated: 2024/03/03 21:08:51 by rakman           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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
			pp[i] = min + i;
			i++;
		}
		return (pp);
	}
}
