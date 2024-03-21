/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:19:31 by rakman            #+#    #+#             */
/*   Updated: 2024/03/21 22:12:39 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *list, int size)
{
	int	i;
	int	smallest_idx;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		smallest_idx = i;
		j = i + 1;
		while (j < size)
		{
			if (list[j] < list[smallest_idx])
			{
				smallest_idx = j;
			}
			j++;
		}
		if (smallest_idx != i)
		{
			temp = list[i];
			list[i] = list[smallest_idx];
			list[smallest_idx] = temp;
		}
		i++;
	}
}
