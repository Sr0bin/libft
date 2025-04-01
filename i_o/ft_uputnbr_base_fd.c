/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr_base_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:09:40 by rorollin          #+#    #+#             */
/*   Updated: 2025/04/01 15:44:50 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "i_o.h"

ssize_t	ft_uputnbr_base_fd(int fd, unsigned long long int n, char *base)
{
	size_t		size_base;
	ssize_t		byte_written;

	byte_written = 0;
	if (!ft_valid_base(base))
		return (byte_written);
	size_base = ft_strlen(base);
	if (n <= (unsigned long) size_base - 1)
		byte_written += ft_putchar_fd(base[n], fd);
	else
	{
		byte_written += ft_putnbr_base_fd(fd, (long long)(n / size_base), base);
		n = (n % size_base);
		byte_written += ft_putchar_fd(base[n], fd);
	}
	return (byte_written);
}
