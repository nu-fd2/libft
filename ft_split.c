/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:56:25 by oel-mado          #+#    #+#             */
/*   Updated: 2024/11/09 13:24:56 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(const char *str, char c)
{
    if (!str)
        return (NULL);
    if (*str == '\0')
        return (ft_strdup("\0"));
    if (!c)
        return (ft_strdup(str));
}
static words(const char *str, char c)
{
    int i;
    int j;
    int word;
    i = 0;
    word = 0;
    while (str[i])
    {
        if (str[i] == c)
            j = 0;
        else if (!j)
        {
            j = 1;
            word++;
        }
    i++;
    }
    return (word);
}
static **arr(int word, const char *str, char c)
{
    
}
















#include <stdio.h>
#include <stdlib.h>
#include "libft.h"  // Ensure this includes the prototype for ft_split

void print_split_result(char **result) {
    if (!result) {
        printf("NULL result\n");
        return;
    }
    for (int i = 0; result[i]; i++) {
        printf("'%s'\n", result[i]);
    }
}

void free_split_result(char **result) {
    if (!result) return;
    for (int i = 0; result[i]; i++) {
        free(result[i]);
    }
    free(result);
}

int main() {
    char **result;

    printf("Test 1: Basic functionality\n");
    result = ft_split("Hello world this is a test", ' ');
    print_split_result(result);
    free_split_result(result);

    printf("\nTest 2: Multiple consecutive delimiters\n");
    result = ft_split("Hello,,,world,,,", ',');
    print_split_result(result);
    free_split_result(result);

    printf("\nTest 3: Empty string\n");
    result = ft_split("", ',');
    print_split_result(result);
    free_split_result(result);

    printf("\nTest 4: Delimiter at start, middle, and end\n");
    result = ft_split(",Hello,world,", ',');
    print_split_result(result);
    free_split_result(result);

    printf("\nTest 5: Single character string\n");
    result = ft_split("H", ',');
    print_split_result(result);
    free_split_result(result);

    printf("\nTest 6: Delimiter-only string\n");
    result = ft_split(",,,,", ',');
    print_split_result(result);
    free_split_result(result);

    printf("\nTest 7: Null pointer as input\n");
    result = ft_split(NULL, ',');
    print_split_result(result);
    free_split_result(result);

    printf("\nTest 8: Special characters\n");
    result = ft_split("Hello\nworld\t42", '\t');
    print_split_result(result);
    free_split_result(result);

    printf("\nTest 9: Whitespace-only string\n");
    result = ft_split("   ", ' ');
    print_split_result(result);
    free_split_result(result);

    printf("\nTest 10: Delimiter not present in the string\n");
    result = ft_split("Hello world", ',');
    print_split_result(result);
    free_split_result(result);

    return 0;
}
