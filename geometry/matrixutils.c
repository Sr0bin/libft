/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:37:33 by rorollin          #+#    #+#             */
/*   Updated: 2025/04/14 14:14:07 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"
#include "memory.h"
#include <math.h>

t_matrix	create_matrix(size_t row, size_t col)
{
	t_matrix	matrix;
	size_t		i;

	matrix = ft_calloc(1, sizeof(t_matrix_struct));
	i = 0;
	if (matrix == NULL)
		return (NULL);
	matrix->index = (float **) ft_calloc(row + 1, sizeof(float *));
	if (matrix->index == NULL)
	{
		free(matrix);
		return (NULL);
	}
	while (i < row)
	{
		(matrix->index)[i] = ft_calloc(col + 1, sizeof(float));
		if ((matrix->index)[i] == NULL)
		{
			free_matrix(matrix);
			return (NULL);
		}
		i++;
	}
	matrix->col_size = col;
	matrix->row_size = row;

	return (matrix);
}

t_matrix	matrix_copy(t_matrix_const matrix)
{
	size_t		i;
	size_t		j;
	t_matrix	copy;

	i = 0;
	copy = create_matrix(matrix->row_size, matrix->col_size);
	if (copy == NULL)
		return (NULL);
	while (i < matrix->row_size)
	{
		j = 0;
		while (j  < matrix->col_size)
		{
			copy->index[i][j] = matrix->index[i][j];
			j++;
		}
		i++;
	}
	return (copy);
}

void	free_matrix(t_matrix matrix)
{
	size_t	i;

	i = 0;
	if (matrix == NULL)
		return ;
	while (i <= matrix->row_size)
		free(matrix->index[i++]);
	free((void *) matrix->index);
	free(matrix);
}

float	matrix_get_coord(t_matrix matrix, size_t row, size_t col)
{
	if (row > matrix->row_size || col > matrix->col_size)
		return (NAN);
	return (matrix->index[row][col]);
}

#include <stdio.h>
void	print_matrix(t_matrix_const matrix)
{
	size_t	i;
	size_t	j;
	i = 0;
	while (i < matrix->row_size)
	{
		j = 0;
		while (j < matrix->col_size)
		{
			printf("%.2f ", (double) matrix->index[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
// TODO(rorollin): Code the thing
/**/
/*double	det_matrix(t_matrix_const matrix)*/
/*{*/
/*	double	det;*/
/**/
/*	det = 0;*/
/*	if (matrix->col_size != matrix->row_size)*/
/*		return (0);*/
/*	return (det);*/
/*}*/


