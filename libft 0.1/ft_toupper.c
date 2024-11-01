/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:08:02 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/25 17:04:34 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return (c);
}
// int main()
// {
//     char A = 'A';
//     char z = 'z';
    
//     printf ("%c %c\n", A, z);
//     A = ft_toupper(A);
//     z = ft_toupper(z);
//     printf ("%c %c\n", A, z);
// }