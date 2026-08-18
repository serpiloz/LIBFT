/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serozdem <serozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 17:38:32 by serozdem          #+#    #+#             */
/*   Updated: 2026/08/18 12:04:08 by serozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b = (const unsigned char *)src;
	size_t				i;

	a = (unsigned char *)dest;
	i = 0;
	if (!dest && !src)
	{
		return (NULL);
	}
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
