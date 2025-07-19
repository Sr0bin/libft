/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:56:35 by rorollin          #+#    #+#             */
/*   Updated: 2025/07/19 16:33:58 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"


t_list	*ft_lstpop(t_list **lst_prev, void (*del)(void *))
{
	t_list	*lst_temp;

	if (*lst_prev == NULL || (*lst_prev)->next == NULL)
		return (*lst_prev);
	lst_temp = (*lst_prev)->next->next;
	ft_lstdelone((*lst_prev)->next, del);
	(*lst_prev)->next = lst_temp;
	return (*lst_prev);
}
