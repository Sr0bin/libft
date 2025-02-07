/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_o.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:49:16 by rorollin          #+#    #+#             */
/*   Updated: 2025/02/07 15:54:21 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_O_H
# define I_O_H

# include <stdlib.h>

size_t	ft_putnbr_base_fd(int fd, long long int n, char *base);
size_t	ft_uputnbr_base_fd(int fd, unsigned long long int n, char *base);
size_t	ft_putchar_fd(char c, int fd);
size_t	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
#endif
