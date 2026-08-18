/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serozdem <serozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 02:56:20 by serozdem          #+#    #+#             */
/*   Updated: 2026/08/18 19:44:20 by serozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*array;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	else if (len > s_len - start)
		len = s_len - start;
	array = (char *)(malloc(sizeof(char) * (len + 1)));
	if (!array)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		array[i] = s[start + i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
