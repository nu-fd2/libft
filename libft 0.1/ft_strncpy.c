/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 05:03:47 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/26 05:13:43 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char *ft_strncpy(char *dst, const char *src, size_t n)
{
    int i;

    i = 0;
    while (src[i] != '\0' && n > i)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

// int main(){
//     const char src[] = "qwertyuiop";
//     char dst[100];
//     const char sr[] = "qwertyuiop";
//     char ds[100];
//     printf("%s\n%s\n%s\n", src, ft_strncpy(dst, src, 7), strncpy(ds, sr, 7));
// }