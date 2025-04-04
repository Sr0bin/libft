/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:13:13 by rorollin          #+#    #+#             */
/*   Updated: 2025/04/01 15:39:28 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "i_o.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd((char *) "-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		ft_putchar_fd((char) n + '0', fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		n = (n % 10);
		ft_putchar_fd((char) n + '0', fd);
	}
}
