/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:17:38 by rorollin          #+#    #+#             */
/*   Updated: 2025/02/07 16:55:08 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1 && !(s1[i] - s2[i]))
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
