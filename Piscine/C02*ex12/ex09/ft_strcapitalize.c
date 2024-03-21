/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:53:36 by rakman            #+#    #+#             */
/*   Updated: 2024/03/21 22:52:55 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

void	ft_make_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_uppercase(str[i]) == 1)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_is_alpha_numeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_make_lower(str);
	while (str[i])
	{
		if (ft_is_alpha_numeric(str[i]))
		{
			if (ft_is_alpha_numeric(str[i - 1]) == 0)
			{
				if (ft_is_numeric(str[i]) == 0)
				{
					str[i] = str[i] - 32;
				}
				i++;
			}
		}
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	return (str);
}
