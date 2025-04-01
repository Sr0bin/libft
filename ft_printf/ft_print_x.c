/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:22:46 by rorollin          #+#    #+#             */
/*   Updated: 2025/04/01 15:59:24 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_x(int fd, void *nbr)
{
	return (ft_putnbr_base_fd(fd, *(t_uint *)&nbr, (char *)"0123456789abcdef"));
}
