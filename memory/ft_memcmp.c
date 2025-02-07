/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:11:46 by rorollin          #+#    #+#             */
/*   Updated: 2025/02/07 15:59:03 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p_source1;
	const unsigned char	*p_source2;
	size_t				i;

	i = 0;
	p_source1 = (const unsigned char *) s1;
	p_source2 = (const unsigned char *) s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && !(p_source1[i] - p_source2[i]))
		i++;
	return ((int)(p_source1[i] - p_source2[i]));
}
