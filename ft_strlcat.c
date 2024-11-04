/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 02:56:44 by oel-mado          #+#    #+#             */
/*   Updated: 2024/11/04 15:34:32 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t n)
{
    int i;
    int j;
    int k;
    i = 0;
    j = 0;
    k = ft_strlen(dst);
    if (n < ft_strlen(dst))
        return (ft_strlen((char *)src) + n);
    while (dst[i] && i + 1 < n)
        i++;
    while (src[j] && i + j + 1 < n)
    {
        dst[i + j] = src[j];
        j++;
        dst[i + j] = '\0';
    }
    return (k + ft_strlen((char *)src));
}
