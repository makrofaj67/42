/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:21:35 by rakman            #+#    #+#             */
/*   Updated: 2024/03/23 15:21:41 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str, char *base)
{
	int	i;
	int	j;
	int	result;

	i = 1;
	result = 0;
	while ((*str <= 13 && *str >= 9) || (*str == 32))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			i = i * -1;
		}
		str++;
	}
	while (*str)
	{
		j = 0;
		while (base[j] != *str)
		{
			j++;
		}
		if (base[j] == 0)
		{
			break ;
		}
		result = result * ft_strlen(base) + j;
		str++;
	}
	return (result * i);
}

int	ft_is_valid_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
		{
			return (0);
		}
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	if (ft_is_valid_base(base) == 0)
	{
		return (0);
	}
	else
	{
		return (ft_atoi(str, base));
	}
}
