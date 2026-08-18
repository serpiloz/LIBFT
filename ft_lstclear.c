/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serozdem <serozdem@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 17:46:37 by serozdem          #+#    #+#             */
/*   Updated: 2026/08/18 18:45:39 by serozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last;

	if (!lst || !del)
	{
		return ;
	}
	while (*lst)
	{
		last = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = last;
	}
	*lst = NULL;
}
