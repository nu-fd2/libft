/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:10:01 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/27 23:50:31 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int sg;
    int nb;
    int i;
    i = 0;
    sg = 1;
    nb = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sg = -sg;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = (nb * 10) + (str[i] - 48);
        i++;
    }
    return (nb * sg);
}
// #include <stdio.h>
// #include <stdlib.h>  // For atoi

// // Prototype of your ft_atoi function
// int ft_atoi(const char *str);

// int main(void) {
//     // Test cases
//     char *tests[] = {
//         "123",
//         "-123",
//         "   456",
//         "   -789",
//         "+42",
//         "0",
//         "    +0",
//         "2147483647",   // INT_MAX
//         "-2147483648",  // INT_MIN
//         "   +2147483647",
//         "abc123",
//         "123abc",
//         "  00123",
//         NULL
//     };

//     printf("Testing ft_atoi vs atoi:\n\n");
//     for (int i = 0; tests[i] != NULL; i++) {
//         printf("Input: \"%s\"\n", tests[i]);
//         printf("ft_atoi: %d\n", ft_atoi(tests[i]));
//         printf("   atoi: %d\n\n", atoi(tests[i]));
//     }

//     return 0;
// }
