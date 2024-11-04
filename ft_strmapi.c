/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:03:26 by oel-mado          #+#    #+#             */
/*   Updated: 2024/11/04 17:47:25 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char *ptr;
    int i;

    i = 0;
    if (!s)
    {
        ptr = NULL;
        return (ptr);
    }
    ptr = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
    if (!ptr)
        return (ptr);
    if (ft_strlen((char *)s) == 0)
        {
            *ptr = '\0';
            return (ptr);
        }
    while (i < ft_strlen((char *)s))
    {
        ptr[i] = f(ft_strlen((char *)s), s[i]);
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // Declaration of your function
// char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

// // Sample function to pass to ft_strmapi for testing
// char sample_function(unsigned int i, char c) {
//     return (c >= 'a' && c <= 'z') ? c - 32 : c;  // Converts lowercase to uppercase
// }

// void run_test(const char *input, char (*f)(unsigned int, char), const char *expected) {
//     // Run ft_strmapi
//     char *result = ft_strmapi(input, f);

//     // Print test details and results
//     printf("📌 Test: ft_strmapi(\"%s\")\n", input);
//     printf("   Your result : \"%s\"\n", result ? result : "NULL");
//     printf("   Expected    : \"%s\"\n", expected);

//     if (result && strcmp(result, expected) == 0) {
//         printf("✅ Passed\n\n");
//     } else {
//         printf("❌ Failed\n\n");
//     }

//     // Free the result if it was allocated
//     free(result);
// }

// int main() {
//     // Basic tests
//     run_test("hello", sample_function, "HELLO");
//     run_test("WORLD", sample_function, "WORLD");
//     run_test("MiXeDcAsE", sample_function, "MIXEDCASE");

//     // Strings with special characters
//     run_test("123!@#", sample_function, "123!@#");
//     run_test("lowerUPPER", sample_function, "LOWERUPPER");

//     // Large input
//     run_test("abcdefghijklmnopqrstuvwxyz", sample_function, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");

//     // Edge cases
//     run_test("", sample_function, "");  // Empty string
//     run_test(NULL, sample_function, NULL);  // Null input (handle in ft_strmapi if required)

//     return 0;
// }
