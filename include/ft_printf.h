/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:24:23 by rorollin          #+#    #+#             */
/*   Updated: 2025/04/01 16:01:44 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include "i_o.h"

typedef unsigned int	t_uint;

ssize_t		ft_printf(const char *str, ...)
			__attribute__((format(printf, 1, 2)));
ssize_t		ft_dprintf(int fd, const char *str, ...) \
__attribute__ ((format(printf, 2, 3)));
ssize_t		ft_parser(char *str, va_list args, int fd);
ssize_t		ft_print_d(int fd, void *number);
ssize_t		ft_print_p(int fd, void *pointer);
ssize_t		ft_print_i(int fd, void *number);
ssize_t		ft_print_s(int fd, void *string);
ssize_t		ft_print_u(int fd, void *number);
ssize_t		ft_print_x(int fd, void *number);
ssize_t		ft_print_x_upper(int fd, void *number);
ssize_t		ft_print_c(int fd, void *character);
ssize_t		ft_format(char c, va_list args, int fd);
#endif 
