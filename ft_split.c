/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:56:25 by oel-mado          #+#    #+#             */
/*   Updated: 2024/11/02 22:31:19 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ctoc(char *str, char c, int i)
{
    size_t ln;
    ln = 0;
    while (str[i] && str[i] != c)
        ln++;
    return ln;
}

// char **ft_split(char *str, char c)
// {
//     int i;
//     int j;
//     int k;
//     char **ptr;
//     i = 0;
//     j = 0;
//     while (str[i])
//     {
//         if (str[i] == c)
//         {
//             i++;
//             k + 0;
//             ptr[j] = ft_calloc(ctoc(str, c, i), sizeof(char));
//             if (!ptr[j])
//                 return (*ptr);
//             while ()
//         }
//         j++;
//         i++;
//     }
// }