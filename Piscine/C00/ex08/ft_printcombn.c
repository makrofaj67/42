/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcombn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:06:19 by rakman            #+#    #+#             */
/*   Updated: 2024/03/07 21:15:36 by rakman           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_combn(int n) {
    int i;
    char digits[10] = {0};

    while (digits[0] < 10 - n)
	{
        i = n - 1;
        while (digits[i] == i + 10 - n)
		{
            i--;
        }
        digits[i]++;
        while (i++ < n)
		{
            digits[i] = digits[i - 1] + 1;
        }
        i = 0;
        while (i < n)
		{
            ft_putchar(digits[i] + '0');
            i++;
        }
        if (digits[0] != 10 - n)
		{
            ft_putchar(',');
            ft_putchar(' ');
        }
    }
}
int main ()
{
	ft_print_combn(5);
}
