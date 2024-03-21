/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:30:49 by rakman            #+#    #+#             */
/*   Updated: 2024/03/21 23:50:29 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	if (i < n)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == 0)
	{
		return (str);
	}
	while (*str)
	{
		if (ft_strncmp(str, to_find, ft_strlen(to_find)) == 0)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
