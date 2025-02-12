/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:48:08 by rorollin          #+#    #+#             */
/*   Updated: 2025/02/12 20:36:56 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dprintf(int fd, const char *str, ...)
{
	va_list	arguments;
	size_t	bytes_written;

	bytes_written = 0;
	if (str == NULL)
		return (-1);
	va_start(arguments, str);
	bytes_written = ft_parser((char *) str, arguments, fd);
	va_end(arguments);
	return (bytes_written);
}
