/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:21:30 by rorollin          #+#    #+#             */
/*   Updated: 2025/07/31 23:36:19 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char **str1, char *str2)
{
	char	*new_str;
	size_t	total_len;

	total_len = ft_strlen(*str1) + ft_strlen(str2) + 1;

	new_str = ft_strrsz(str1, total_len);
	if (new_str == NULL)
		return (NULL);
	ft_strlcat(*str1, str2, total_len);
	free(str2);
	return (new_str);

}
