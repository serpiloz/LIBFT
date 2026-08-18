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
	size_t	j;
	size_t	len;

	if (!s)
		return (NULL);
	index = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!index)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			len = word_len(&s[i], c);
			index[j] = ft_substr(s, i, len);
			if (!index[j])
				return (free_all(index, j));
			i += len;
			j++;
		}
		else
			i++;
	}
	index[j] = NULL;
	return (index);
}
