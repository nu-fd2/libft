/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:55:07 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/25 11:49:23 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h> 
//#include "libft.h"

// void ft_memset(void *ptr, int n, size_t len)
// {
//     int i;

//     i = 0;
//     while (i < n)
//     {
//         ptr[i] = (unsigned char *)n
//         i++;
//     }// wtf is this
//     return (*ptr);
// }

int main()
{
    char p[] = "qwerty";
    printf("%s\n", p);
    char *pr = memeset(*p, 0, 4);
    printf("%s\n", pr);
}