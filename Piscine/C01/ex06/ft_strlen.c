/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:18:12 by rakman            #+#    #+#             */
/*   Updated: 2024/03/08 19:18:53 by rakman           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int main ()

{
    char *s1;

    s1 = "kalem";
    ft_strlen(s1);
}