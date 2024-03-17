/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:54:07 by rakman            #+#    #+#             */
/*   Updated: 2024/03/17 19:55:00 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_transform_and_write(char c)
{
	char	backslash;
	int		c1;
	int		c16;
	char	*hexo;

	backslash = 92;
	hexo = "0123456789abcdef";
	c1 = c / 16;
	c16 = c % 16;
	write(1, &backslash, 1);
	write(1, &(hexo[c1]), 1);
	write(1, &(hexo[c16]), 1);
}

int	ft_is_non_printable(char c)
{
	if (!(c >= 32 && c <= 126))
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)

{
	while (*str)
	{
		if (ft_is_non_printable(*str))
		{
			ft_transform_and_write(*str);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
