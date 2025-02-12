/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_gnl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:22:04 by rorollin          #+#    #+#             */
/*   Updated: 2025/02/07 18:32:40 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_gnl(char **s1, char **s2)
{
	char	*new_string;
	size_t	len_s1;
	size_t	len_s2;

	if (*s1 == NULL && *s2 == NULL)
		return (NULL);
	if (*s1 == NULL)
		return (*s2);
	if (*s2 == NULL)
		return (*s1);
	len_s1 = ft_strlen_c(*s1, '\n');
	len_s2 = ft_strlen_c(*s2, '\n');
	new_string = ft_calloc((len_s1 + len_s2 + 1), sizeof(char));
	if (new_string == NULL)
	{
		free(*s1);
		free(*s2);
		return (NULL);
	}
	ft_memcpy(new_string, *s1, len_s1);
	ft_memcpy(&new_string[len_s1], *s2, len_s2);
	free(*s1);
	free(*s2);
	return (new_string);
}
