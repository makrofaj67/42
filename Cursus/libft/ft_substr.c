/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:15:09 by rakman            #+#    #+#             */
/*   Updated: 2024/11/18 05:52:45 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*allocating;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	allocating = (char *)malloc(sizeof(char) * (len + 1));
	if (allocating == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		allocating[i] = s[start + i];
		i++;
	}
	allocating[i] = '\0';
	return (allocating);
}
