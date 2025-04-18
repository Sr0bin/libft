/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:37:39 by rorollin          #+#    #+#             */
/*   Updated: 2025/04/01 15:47:40 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}
