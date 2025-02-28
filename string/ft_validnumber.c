/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validnumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 06:33:49 by rorollin          #+#    #+#             */
/*   Updated: 2025/02/28 06:49:20 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"
#include "string.h"

static size_t	ft_charstatus(int c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	if (c == '+' || c == '-')
		return (2);
	if (ft_isdigit(c))
		return (3);
	return (0);
}
size_t	ft_validnumber(const char str[static 1])
{
	size_t	i;

	i = 0;
	while (ft_charstatus(str[i]) == 1)
		i++;
	if (ft_charstatus(str[i]) == 2)
		i++;
	if (ft_charstatus(str[i]) != 3)
		return (0);
	while (ft_charstatus(str[i]) == 3)
		i++;
	return (str[i] == '\0');
}
