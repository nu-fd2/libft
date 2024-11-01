/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:08:04 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/25 17:04:28 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return (c);
}
// int main()
// {
//     char A = 'A';
//     char z = 'z';
    
//     printf ("%c %c\n", A, z);
//     A = ft_tolower(A);
//     z = ft_tolower(z);
//     printf ("%c %c\n", A, z);
// }