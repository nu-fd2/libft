/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 05:22:13 by oel-mado          #+#    #+#             */
/*   Updated: 2024/11/09 10:15:01 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
    int i;

    i = 0;
    if (n == 0)
        return (ft_strlen(src));
    while (src[i] && i + 1 < n)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}
