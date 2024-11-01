/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 02:56:44 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/28 21:32:26 by oel-mado         ###   ########.fr       */
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

size_t ft_strlcat(char *dst, const char *src, size_t n)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (dst[i] && i < n)
        i++;
    while (src[j])
    {
        dst[i + j] = src[j];
        j++;
    }
        dst[i + j] = '\0';
    return (ft_strlen(dst));
}