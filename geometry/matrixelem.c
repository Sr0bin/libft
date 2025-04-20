/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrixelem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:28:22 by rorollin          #+#    #+#             */
/*   Updated: 2025/04/16 17:30:27 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

void	*matrix_set_identity(t_matrix matrix)
{
	size_t	i;

	i = 0;
	if (matrix->col_size != matrix->row_size)
		return (NULL);
	while (i < matrix->col_size)
	{
		matrix_set_coord(matrix, i, i, 1);
		i++;
	}
	return (matrix);
}
