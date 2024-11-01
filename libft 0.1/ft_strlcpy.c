/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 05:22:13 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/28 05:22:22 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(char *who)
{
	size_t ask;

	ask = 0;
    while (who[ask])
		ask++;
	return (ask);
}

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
    int i;

    i = 0;
    while (src[i] != '\0' && n > i)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(dst));
}