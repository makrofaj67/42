/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:15:18 by rakman            #+#    #+#             */
/*   Updated: 2024/03/07 15:11:21 by rakman           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistdio.h>

void	ft_strcat_sep(int size, char **strs, char *sep, char *new)
{
	int	i;
	int	j;
	int	k;
	int	t;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			new[k] = strs[i][j];
			k++;
			j++;
		}
		t = 0;
		while (sep[t] && i < size - 1)
		{
			new[k] = sep[t];
			k++;
			t++;
		}
		i++;
	}
}

int	ft_totallenghttomalloc(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	slen;

	i = 0;
	k = 0;
	slen = 0;
	while (i + 1 < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
		}
		slen = slen + j;
		i++;
	}
	while (sep[k])
	{
		k++;
	}
	return (k + slen + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*mallocedarray;

	mallocedarray = (char *)malloc(ft_totallenghttomalloc(size, strs, sep)
			* sizeof(char));
	ft_strcat_sep(size, strs, sep, mallocedarray);
	return (mallocedarray);
}
