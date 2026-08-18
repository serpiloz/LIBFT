/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serozdem <serozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 14:18:34 by serozdem          #+#    #+#             */
/*   Updated: 2026/08/18 18:30:40 by serozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long int nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			count;
	long int	nb;
	char		*array;

	nb = n;
	count = ft_count(nb);
	array = (char *)(malloc(sizeof(char) * (count + 1)));
	array[count] = '\0';
	if (nb < 0)
	{
		array[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
	{
		array[0] = '0';
	}
	while (nb > 0)
	{
		array[count - 1] = (nb % 10) + '0';
		nb = nb / 10;
		count--;
	}
	return (array);
}
