/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:03:26 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/28 02:28:05 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lnnn(char *who)
{
	int	ask;
	ask = 0;
    while (who[ask])
		ask++;
	return (ask);
}
char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char *ptr;
    int i;
    int l;
    i = 0;
    l = lnnn((char *)s);
    ptr = malloc(sizeof(char) * l);
    if (!ptr)
        return (NULL);
    while (i < l)
    {
        ptr[i] = f(l, s[i]);
        i++;
    }
    return (ptr);
}
