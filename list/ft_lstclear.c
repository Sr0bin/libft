/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 01:33:25 by rorollin          #+#    #+#             */
/*   Updated: 2025/03/29 19:10:11 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_next;
	t_list	*iterator;

	if (lst == NULL || *lst == NULL)
		return ;
	iterator = *lst;
	while (iterator != NULL)
	{
		lst_next = iterator->next;
		ft_lstdelone(iterator, del);
		iterator = lst_next;
	}
	*lst = NULL;
}
