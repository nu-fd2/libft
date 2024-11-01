/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 05:53:19 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/26 18:56:31 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return ((char *)&str[i]);
        else
            i++;
    }
    return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     const char *str = "hello world";
//     char *first = strchr(str, 'l');
//     char *last = ft_strchr(str, 'l');

//     printf("First occurrence of 'l': %s\n", first);
//     printf("Last occurrence of 'l': %s\n", last);

//     return 0;
// }