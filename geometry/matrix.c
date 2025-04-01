/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:37:33 by rorollin          #+#    #+#             */
/*   Updated: 2025/04/01 15:05:31 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"
#include "memory.h"
#include <stdlib.h>

t_matrix	create_matrix(size_t row, size_t col)
{
	t_matrix	matrix;
	size_t		i;

	matrix = ft_calloc(1, sizeof(t_matrix));
	i = 0;
	if (matrix == NULL)
		return (NULL);
	matrix->index = (double **) ft_calloc(col, sizeof(double *));
	if (matrix->index == NULL)
	{
		free(matrix);
		return (NULL);
	}
	while (i++ < row)
	{
		(matrix->index)[i] = ft_calloc(row, sizeof(double));
		if ((matrix->index)[i] == NULL)
		{
			free_matrix(matrix);
			return (NULL);
		}
	}
	return (matrix);
}
void	free_matrix(t_matrix matrix)
{
	size_t	i;

	i = 0;
	while (i < matrix->number_rows)
		free(matrix->index[i++]);
	free(matrix->index);
	free(matrix);
}
