/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:48:58 by rorollin          #+#    #+#             */
/*   Updated: 2025/04/01 15:52:25 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_p(int fd, void *pointer)
{
	ssize_t	bytes_written;

	bytes_written = 0;
	if (pointer == NULL)
		return (ft_putstr_fd((char *) "(nil)", fd));
	bytes_written += ft_putstr_fd((char *) "0x", fd);
	bytes_written += ft_uputnbr_base_fd(fd, (unsigned long long) pointer,
			(char *) "0123456789abcdef");
	return (bytes_written);
}
