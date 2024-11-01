/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:55:07 by oel-mado          #+#    #+#             */
/*   Updated: 2024/11/01 12:12:30 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h> 
//#include "libft.h"

void *ft_memset(void *ptr, int n, size_t len)
{
    int i;
    i = 0;
    while (i < len)
        ((char *)ptr)[i++] = n;
    ((char *)ptr)[i] = 0;
    return (ptr);
}

int main()
{
    char p[] = "qwerty";
    printf("%s\n", p);
    char *pr = ft_memset(*p, 0, 4);
    printf("%s\n", pr);
}