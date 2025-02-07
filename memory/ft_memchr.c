/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:05:48 by rorollin          #+#    #+#             */
/*   Updated: 2025/02/07 15:59:03 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	unsigned char			*p_result;
	const unsigned char		*p_source;

	p_result = NULL;
	p_source = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (p_source[i] == (unsigned char) c)
		{
			p_result = (unsigned char *) &p_source[i];
			break ;
		}
		i++;
	}
	i++;
	return (p_result);
}
