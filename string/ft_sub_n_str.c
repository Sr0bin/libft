/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sub_n_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:18:45 by rorollin          #+#    #+#             */
/*   Updated: 2025/02/07 18:19:08 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "memory.h"

char	*ft_sub_n_str(char *s, size_t n)
{
	char	*new_string;
	size_t	max_mem;

	new_string = NULL;
	max_mem = ft_strlen_c(s, '\n');
	if (max_mem == 0 || n == 0)
		return (NULL);
	if (max_mem > n)
		max_mem = n;
	new_string = ft_calloc((max_mem + 1), sizeof(char));
	if (new_string == NULL)
		return (NULL);
	ft_memcpy(new_string, s, max_mem);
	return (new_string);
}
