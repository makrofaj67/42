/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakman <rakman@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:54:08 by rakman            #+#    #+#             */
/*   Updated: 2024/03/17 19:55:00 by rakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

void *ft_print_memory(void *addr, unsigned int size) {
    unsigned char *ptr = (unsigned char*)addr;
    unsigned int i, j;

    if (size == 0) {
        return addr;
    }

    for (i = 0; i < size; i += 16) {
        printf("%p: ", ptr + i);
        for (j = i; j < i + 16 && j < size; j++) {
            printf("%02x ", ptr[j]);
            if (j % 2) {
                printf(" ");
            }
        }
        for (; j % 16 != 0; j++) {
            printf("   ");
            if (j % 2) {
                printf(" ");
            }
        }
        for (j = i; j < i + 16 && j < size; j++) {
            printf("%c", isprint(ptr[j]) ? ptr[j] : '.');
        }
        printf("\n");
    }

    return addr;
}
