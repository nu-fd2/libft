/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:03:26 by oel-mado          #+#    #+#             */
/*   Updated: 2024/11/09 10:15:34 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char *ptr;
    int i;

    i = 0;
    if (!s)
        return (NULL);
    ptr = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!ptr)
        return (ptr);
    if (!s)
        {
            ptr = NULL;
            return (ptr);
        }
    while (i < ft_strlen(s))
    {
        ptr[i] = f(i, s[i]);
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
