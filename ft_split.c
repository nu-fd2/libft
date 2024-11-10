/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-mado <oel-mado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:56:25 by oel-mado          #+#    #+#             */
/*   Updated: 2024/11/10 22:41:47 by oel-mado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**frre(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free (arr[i]);
		i++;
	}
	free (arr);
	return (NULL);
}

static int	f_words(const char *str, char c)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	j = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] == c)
			j = 0;
		else if (j == 0)
		{
			j = 1;
			word++;
		}
		i++;
	}
	return (word);
}

static char	**m_lit(char **arr, int word, const char *str, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (word)
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
		{
			if (!ft_strchr(&str[i], c))
				j = ft_strlen(&str[i]);
			else
				j = ft_strchr(&str[i], c) - &str[i];
			arr[k++] = ft_substr(&str[i], 0, j);
			if (!arr[k - 1])
				return (frre(arr));
			i = i + j;
		}
		word--;
	}
	return (arr);
}

char	**ft_split(const char *str, char c)
{
	int		word;
	int		i;
	char	**arr;

	i = 0;
	if (!str)
		return (NULL);
	word = f_words(str, c);
	arr = ft_calloc(sizeof(char *), word + 1);
	if (!arr)
		return (NULL);
	if (!m_lit(arr, word, str, c))
		return (frre(arr));
	return (arr);
}
