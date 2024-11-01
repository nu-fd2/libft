/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:26:05 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/30 23:35:47 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//#include "libft.h"

void ft_putin(int nb, char *str)
{
    if (nb < 0)
    {
        ft_trump(str, '-');
        nb = -nb;
    }
    if (nb == -2147483648)
    {
        ft_trump(str, '2');
        ft_putin(147483648, str);
    }
    if (nb >= 10)
    {
        ft_putin(nb / 10, str);
        ft_putin(nb % 10, str);
    }
    else if (nb >= 0 && nb <= 9)
        ft_trump(str, nb + '0');
}
void ft_trump(char *str, char c)
{
    while ((*str != '\0') && str++ == 0)
        str++;
    *str = c;
}

char *ft_itoa(int n)
{
    int i;
    int s;
    char *str;
    i = 0;
    s = 0;
    if (n < 0)
        s = 1;
    if (n == 0)
    {
        *str = '0';
        return (str);
    }
    str = ft_calloc(11 + s, sizeof(char));
    if (!str)
        return (NULL);
    ft_putin(n, str);
    return (str);
}


void *ft_calloc(size_t count, size_t size)
{
    int i;
    void *ptr;
    
    i = 0;
    ptr = malloc(size * count);
    if ((!ptr) || (count * size <= 0))
        ptr = NULL;
    else
        ft_bzero(ptr, count);
    return (ptr);
}

int main()
{
    printf("%s\n", ft_itoa(123456));
}