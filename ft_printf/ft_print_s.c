/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:47:11 by rorollin          #+#    #+#             */
/*   Updated: 2025/04/01 15:51:34 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_s(int fd, void *string)
{
	if (string == NULL)
		return (ft_putstr_fd((char *) "(null)", fd));
	return (ft_putstr_fd((char *)string, fd));
}
