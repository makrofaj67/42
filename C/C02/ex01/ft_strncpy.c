/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:03:03 by rakman            #+#    #+#             */
/*   Updated: 2024/03/09 16:22:34 by rakman           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	char *tmp;

	tmp = dest;
	while (*tmp)
	{
		tmp++;
	}
	while (*src || n != 0)
	{
		*tmp++ = *src++;
	}
	return (dest);
}
