/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:30:47 by rakman            #+#    #+#             */
/*   Updated: 2024/03/11 22:35:26 by rakman           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

char	*ft_strcat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && nb >= 1)
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	return (dest);
}