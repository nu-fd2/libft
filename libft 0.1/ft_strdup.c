/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:07:09 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/29 01:13:44 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t ln;
    char *s2;
    if (s1 == NULL)
        return (NULL);
    ln = ft_strlen((char *)s1);
    s2 = malloc(sizeof(char) * ln);
    if (!s2)
        return (NULL);
    ft_strcpy(s2, s1);
    return (s2);
}