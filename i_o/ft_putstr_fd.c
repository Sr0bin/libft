/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:06:08 by rorollin          #+#    #+#             */
/*   Updated: 2025/04/01 15:38:41 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "i_o.h"
#include <unistd.h>

ssize_t	ft_putstr_fd(char *s, int fd)
{
	return (write(fd, s, ft_strlen(s)));
}
