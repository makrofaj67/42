/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:14:56 by rakman            #+#    #+#             */
/*   Updated: 2024/03/23 15:45:15 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_base(char *str, char *base);
int		ft_is_valid_base(char *str);
int		ft_strlen(char *str);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;

	if (ft_is_valid_base(base_from) || ft_is_valid_base(base_to) == 0)
	{
		return (NULL);
	}
	else
	{
		i = ft_atoi_base(nbr, base_from);
		return (ft_itoa(i, base_to));
	}
}
