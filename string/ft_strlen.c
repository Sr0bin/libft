/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:47:45 by rorollin          #+#    #+#             */
/*   Updated: 2025/02/07 16:05:29 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

size_t	ft_strlen(const char *s)
{
	size_t	lenght;

	lenght = 0;
	if (s == NULL)
		return (0);
	while (s[lenght] != '\0')
		lenght++;
	return (lenght);
}
