/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 23:13:10 by rakman            #+#    #+#             */
/*   Updated: 2024/03/17 19:55:00 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
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
	while (*str >= '0' && *str <= '9')
	{
		result = (*str - 48) + result * 10;
		str++;
	}
	return (result * i);
}

/*int	main(void)
{
	printf("%d", ft_atoi(" ---+--+1234ab567"));
}
int	main(void)
{
	int		i;
	char	*str;
	int		i;
	int		result;
	int		i;
	int		i;

	i = 0;
	while (i <= 127)
	{
		if (isspace(i))
		{
			str = "SPACE";
		}
		else
		{
			str = "NOT SPACE";
		}
		printf("%d is %s\n", i, str);
		i++;
	}
}*/
