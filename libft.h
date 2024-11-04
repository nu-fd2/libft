/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:12:07 by oel-mado          #+#    #+#             */
/*   Updated: 2024/11/04 21:11:27 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

//libs
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//String Manipulation Functions
size_t	ft_strlen(char *who);
size_t ft_strlcpy(char *dst, const char *src, size_t n);
size_t ft_strlcat(char *dst, const char *src, size_t n);

//Memory Functions
void *ft_memset(void *ptr, int n, size_t num);

//void ft_memset(void *ptr, int n, size_t len);
void ft_bzero(void *s, size_t len);

//Character Functions
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);

//String Search Functions
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t n);

//Conversion Functions
int ft_atoi(const char *str);

//Memory Allocation Functions
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *s1);

//Advanced String Manipulation Functions

//Function Pointer Functions
char *ft_strmapi(const char *s, char (*f)(unsigned int, char));

//File Descriptor Functions
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

//Bonus: Linked List Functions


#endif //LIBFT_H
