/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:22:45 by oel-mado          #+#    #+#             */
/*   Updated: 2024/10/29 22:29:50 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    int i;
    int j;
    i = 0;
    j = 0;
    if (needle[i] == '\0')
        return ((char *)haystack);
    while (haystack[i] && i < n)
    {
        while (haystack[i + j] == needle[j])
        {
            if (needle[j + 1] == '\0')
                return ((char *)&haystack[i]);
            j++;
        }
        i++;
        j = 0;
    }
    return (NULL);
}

//testt

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// // Function prototype for your ft_strnstr
// char *ft_strnstr(const char *haystack, const char *needle, size_t len);

// // Helper function to display the results more clearly
// void print_result(const char *result, const char *func_name) {
//     if (result) {
//         printf("%s result: \"%s\"\n", func_name, result);
//     } else {
//         printf("%s result: (null)\n", func_name);
//     }
// }

// // Function to test and compare strnstr and ft_strnstr
// void test_strnstr(const char *haystack, const char *needle, size_t len) {
//     char *result_strnstr = strnstr(haystack, needle, len);
//     char *result_ft_strnstr = ft_strnstr(haystack, needle, len);

//     printf("Testing with haystack: \"%s\", needle: \"%s\", len: %zu\n", haystack, needle, len);
//     print_result(result_strnstr, "strnstr");
//     print_result(result_ft_strnstr, "ft_strnstr");

//     // Check if both functions return the same result
//     if (result_strnstr == result_ft_strnstr ||
//         (result_strnstr && result_ft_strnstr && strcmp(result_strnstr, result_ft_strnstr) == 0)) {
//         printf("✅ Both functions returned the same result.\n\n");
//     } else {
//         printf("❌ Results differ!\n\n");
//     }
// }

// int main(void) {
//     // Test cases
//     test_strnstr("Hello, world!", "world", 12);
//     test_strnstr("Hello, world!", "world", 5);
//     test_strnstr("Hello, world!", "", 12);
//     test_strnstr("", "test", 5);
//     test_strnstr("Hello, world!", "o, w", 9);
//     test_strnstr("Testing boundaries", "bound", 7);
//     test_strnstr("A small needle in a haystack", "needle", 18);
//     test_strnstr("Look for something", "something", 0);

//     return 0;
// }
