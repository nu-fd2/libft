/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 02:38:26 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/26 02:53:28 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

char *ft_strncat(char *dst, const char *src, size_t n)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (dst[i])
        i++;
    while (src[j] && j < n)
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';
    return (dst);
}
// int main()
// {
//     char psps[123] = "qwertyuiopqwertyui";
//     char zin[] = "zxcvb";
//     char pss[123] = "qwertyuiopqwertyui";
//     char zn[] = "zxcvb";
//     printf("%s\n", ft_strncat(psps, zin, 123));
//     printf("%s\n", strncat(pss, zn, 123));
// }