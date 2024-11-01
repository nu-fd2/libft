/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:21:26 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/26 05:00:20 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char *ft_strcpy(char *dst, const char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    return (dst);
}

// int main(){
//     const char src[] = "qwertyuiop";
//     char dst[100];
//     const char sr[] = "qwertyuiop";
//     char ds[100];
//     printf("%s\n%s\n%s\n", src, ft_strcpy(dst, src), strcpy(ds, sr));
// }