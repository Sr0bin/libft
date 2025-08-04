/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrsz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:04:17 by rorollin          #+#    #+#             */
/*   Updated: 2025/07/31 23:30:26 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrsz(char **str, size_t new_size)
{
	char	*new_str;
	size_t	len;

	len = ft_strlen(*str);
	new_str = ft_calloc(new_size + 1, sizeof(char));
	if (new_str == NULL)
		return (NULL);
	if (len < new_size)
		ft_strlcpy(new_str, *str, len + 1);
	else
		ft_strlcpy(new_str, *str, new_size + 1);
	free(*str);
	*str = new_str;
	return (*str);
}
