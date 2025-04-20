/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   geometry.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:28:19 by rorollin          #+#    #+#             */
/*   Updated: 2025/04/16 17:29:04 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GEOMETRY_H
# define GEOMETRY_H
# include <stddef.h>
# include <math.h>

typedef struct s_matrix
{
	float	**index;
	size_t	row_size;
	size_t	col_size;
}	t_matrix_struct;

typedef t_matrix_struct*	t_matrix;
typedef const t_matrix_struct*	t_matrix_const;


t_matrix	create_matrix(size_t row, size_t col);
void	free_matrix(t_matrix matrix);
t_matrix	matrix_copy(t_matrix_const matrix);
float	matrix_get_coord(t_matrix matrix, size_t row, size_t col);
void	matrix_set_coord(t_matrix matrix, size_t row, size_t col, float value);
void	*matrix_set_identity(t_matrix matrix);
t_matrix	substract_matrix(t_matrix_const a, t_matrix_const b);
t_matrix	add_matrix(t_matrix_const a, t_matrix_const b);
t_matrix	scalar_matrix(t_matrix_const matrix, float scalar);
t_matrix	multiply_matrix(t_matrix_const a, t_matrix_const b);
void	print_matrix(t_matrix_const matrix);
#endif
