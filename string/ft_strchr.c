/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:49:37 by rorollin          #+#    #+#             */
/*   Updated: 2025/02/07 16:05:29 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	character;

	i = 0;
	character = (unsigned char) c;
	while (s[i] != '\0')
	{
		if (s[i] == character)
			return ((char *) &s[i]);
		i++;
	}
	if (character == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
