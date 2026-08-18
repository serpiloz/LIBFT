/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serozdem <serozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 18:43:14 by serozdem          #+#    #+#             */
/*   Updated: 2026/08/18 18:53:17 by serozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*a = (const void *)s;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
		{
			return ((void *)&a[i]);
		}
		i++;
	}
	return (NULL);
}
