/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:41:32 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/06/08 20:19:26 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nd;

	nd = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (nd->next != NULL)
		{
			nd = nd->next;
		}
		nd->next = new;
	}
}

/* Adds the node ’new’ at the end of the list. */