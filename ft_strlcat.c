/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serozdem <serozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 11:51:25 by serozdem          #+#    #+#             */
/*   Updated: 2026/08/18 19:23:30 by serozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	int		i;

	i = 0;
	src_len = ft_strlen(src);
	if (!dst && size == 0)
	{
		return (src_len);
	}
	dest_len = ft_strlen(dst);
	if (size <= dest_len)
	{
		return (src_len + size);
	}
	while (src[i] != '\0' && (dest_len + i + 1) < size)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
