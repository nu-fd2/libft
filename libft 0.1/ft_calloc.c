/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:35:53 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/29 00:46:53 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    int i;
    void *ptr;
    
    i = 0;
    ptr = malloc(size * count);
    if ((!ptr) || (count * size <= 0))
        ptr = NULL;
    else
        ft_bzero(ptr, count);
    return (ptr);
}