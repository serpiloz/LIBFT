/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serozdem <serozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 11:17:29 by serozdem          #+#    #+#             */
/*   Updated: 2026/08/18 19:16:12 by serozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

static char	**free_all(char **array, size_t a)
{
	while (a > 0)
	{
		a--;
		free(array[a]);
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**index;
	size_t	i;

	if (!s)
		return (NULL);
	index = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!index)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			index[i] = ft_substr(s, 0, word_len(s, c));
			if (!index[i])
				return (free_all(index, i));
			i++;
			s += word_len(s, c);
		}
	}
	index[i] = NULL;
	return (index);
}

