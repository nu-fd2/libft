/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:53:44 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/26 02:27:30 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

char *ft_strcat(char *dst, const char *src)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (dst[i])
        i++;
    while (src[j])
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';
    return (dst);
}
// int main()
// {
//     char psps[16] = "qwertyuiop";
//     char zin[] = "zxcvb";
//     printf("%s\n", ft_strcat(psps, zin));
// }