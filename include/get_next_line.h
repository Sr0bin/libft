/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:59:46 by rorollin          #+#    #+#             */
/*   Updated: 2025/02/07 18:15:46 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE  42
# endif
# define MAX_FD 1024
# include <unistd.h>
# include <limits.h>
# include "string.h"
# include "memory.h"

char	*ft_strjoin_gnl(char **s1, char **s2);
char	*get_next_line(int fd);
#endif
