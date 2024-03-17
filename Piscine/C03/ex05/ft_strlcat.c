/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:30:55 by rakman            #+#    #+#             */
/*   Updated: 2024/03/17 19:55:00 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s1)
{
	unsigned int	i;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	to_cat;

	to_cat = size - ft_strlen(dest) - 1;
	if (size <= ft_strlen(dest))
		return (0);
	else
	{
		while (*src && to_cat >= 1)
		{
			*dest++ = *src++;
			to_cat--;
		}
	}
	return (ft_strlen(dest) + ft_strlen(src));
}
