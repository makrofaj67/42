/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:10:33 by rakman            #+#    #+#             */
/*   Updated: 2024/03/02 20:29:56 by rakman           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*mchar;
	int		i;

	mchar = (char *)malloc(ft_strlen(src) * sizeof(char));
	i = 0;
	while (src[i])
	{
		mchar[i] = src[i];
		i++;
	}
	return (mchar);
}
