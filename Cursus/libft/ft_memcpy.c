/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:20:32 by rakman            #+#    #+#             */
/*   Updated: 2024/11/18 06:00:24 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t						i;
	unsigned char	*restrict	dstpt;
	unsigned char	*restrict	srcpt;

	i = 0;
	dstpt = (unsigned char *)dst;
	srcpt = (unsigned char *)src;
	if (!(srcpt) && !(dstpt))
	{
		return (NULL);
	}
	while (n > 0)
	{
		dstpt[i] = srcpt[i];
		i++;
		n--;
	}
	return (dst);
}
