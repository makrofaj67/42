/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:30:49 by rakman            #+#    #+#             */
/*   Updated: 2024/03/11 22:36:19 by rakman           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int	ft_strlen(char *s1)
{
	unsigned int	i;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int nb)
{
	while (*s1 && (*s1 == *s2) && nb >= 1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		if (ft_strcmp(str, to_find) == 0)
		{
			return (1);
		}
		str++;
	}
	return (0);
}
