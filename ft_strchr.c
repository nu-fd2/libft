/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 05:53:19 by oel-mado          #+#    #+#             */
/*   Updated: 2024/11/03 13:23:27 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] == (unsigned char)c)
            return ((char *)&str[i]);
        i++;
    }
    if (str[i] == '\0')
        return ((char *)&str[i]);
    return ((char *)&str[i]);
}




#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char *ft_strchr(const char *s, int c);  // Assuming your custom function declaration

int main(void) {
    srand(time(NULL));
    int num_tests = 100;  // Number of random tests
    int passed = 1;

    printf("Starting randomized ft_strchr vs strchr tests...\n");

    for (int i = 0; i < num_tests; i++) {
        // Generate a random string length between 5 and 20
        int len = rand() % 16 + 5;
        char str[len + 1];

        // Fill the string with random printable ASCII characters
        for (int j = 0; j < len; j++) {
            str[j] = (rand() % 95) + 32;  // ASCII range for printable characters [32, 126]
        }
        str[len] = '\0';  // Null-terminate the string

        // Choose a random character to search for, possibly not in the string
        char search_char = (rand() % 128);

        // Run both functions
        char *ft_result = ft_strchr(str, search_char);
        char *std_result = strchr(str, search_char);

        // Compare results
        if (ft_result != std_result) {
            printf("Test failed at iteration %d:\n", i + 1);
            printf("String: \"%s\"\n", str);
            printf("Character to find: '%c' (ASCII %d)\n", (search_char >= 32 && search_char <= 126) ? search_char : '?', search_char);
            printf("ft_strchr result: %p | strchr result: %p\n", (void *)ft_result, (void *)std_result);
            if (ft_result)
                printf("ft_strchr found character at: \"%s\"\n", ft_result);
            if (std_result)
                printf("strchr found character at: \"%s\"\n", std_result);
            printf("---------------------------------------\n");
            passed = 0;
        }
    }

    if (passed) {
        printf("All tests passed! ft_strchr and strchr match perfectly.\n");
    } else {
        printf("Some tests failed. Check output above for details.\n");
    }

    return 0;
}
