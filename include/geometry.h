/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   geometry.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:28:19 by rorollin          #+#    #+#             */
/*   Updated: 2025/04/01 15:04:57 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GEOMETRY_H
# define GEOMETRY_H
# include <stddef.h>

typedef struct s_matrix
{
	double	**index;
	size_t	number_rows;
	size_t	number_cols;
}	t_matrix_struct;

typedef t_matrix_struct*	t_matrix;


t_matrix	create_matrix(size_t row, size_t col);
void	free_matrix(t_matrix matrix);
#endif
