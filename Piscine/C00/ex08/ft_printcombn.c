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

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }

void ft_print_combn(int n) {
  int i = 0;
  while (n > 0) {

    printf("[%d] || ", n);
    ft_print_combn(n - 1);
    n--;
    i++;
  }
}

int main(void) { ft_print_combn(4); }
