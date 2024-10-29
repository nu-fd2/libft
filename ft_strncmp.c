/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:03:31 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/26 20:17:55 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;
    i = 0;
    while ((s1[i] && s2[i]) || i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

// //test

// #include <stdio.h>
// #include <string.h>

// // Declaration of ft_strncmp (assuming it's implemented somewhere)
// int ft_strncmp(const char *s1, const char *s2, size_t n);

// int main() {
//     // Test cases
//     const char *str1 = "hello";
//     const char *str2 = "hello";
//     const char *str3 = "world";
//     const char *str4 = "hell";
//     size_t n = 5;

//     // Using strncmp
//     int result1 = strncmp(str1, str2, n);
//     int result2 = strncmp(str1, str3, n);
//     int result3 = strncmp(str1, str4, n);

//     // Using ft_strncmp
//     int ft_result1 = ft_strncmp(str1, str2, n);
//     int ft_result2 = ft_strncmp(str1, str3, n);
//     int ft_result3 = ft_strncmp(str1, str4, n);

//     // Print results
//     printf("strncmp results:\n");
//     printf("strncmp(\"%s\", \"%s\", %zu) = %d\n", str1, str2, n, result1);
//     printf("strncmp(\"%s\", \"%s\", %zu) = %d\n", str1, str3, n, result2);
//     printf("strncmp(\"%s\", \"%s\", %zu) = %d\n", str1, str4, n, result3);

//     printf("\nft_strncmp results:\n");
//     printf("ft_strncmp(\"%s\", \"%s\", %zu) = %d\n", str1, str2, n, ft_result1);
//     printf("ft_strncmp(\"%s\", \"%s\", %zu) = %d\n", str1, str3, n, ft_result2);
//     printf("ft_strncmp(\"%s\", \"%s\", %zu) = %d\n", str1, str4, n, ft_result3);

//     return 0;
// }
