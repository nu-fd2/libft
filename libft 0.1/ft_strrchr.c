/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 06:02:44 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/26 18:57:05 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    int i;
    char *ptr;
    i = 0;
    ptr = NULL;
    while (str[i])
    {
        if (str[i] == c)
            ptr = (char *)&str[i];
        i++;
    }
    return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     const char *str = "hello world";
//     char *first = strrchr(str, 'l');
//     char *last = ft_strrchr(str, 'l');

//     printf("First occurrence of 'l': %s\n", first);
//     printf("Last occurrence of 'l': %s\n", last);

//     return 0;
// }