/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 05:53:19 by oel-mado          #+#    #+#             */
/*   Updated: 2024/11/05 19:33:05 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == (unsigned char)c)
            return ((char *)str);
        str++;
    }
    if ((unsigned char)c == '\0')
    return ((char *)str);
    return (NULL);
}
