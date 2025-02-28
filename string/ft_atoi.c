/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:07:30 by rorollin          #+#    #+#             */
/*   Updated: 2025/02/28 03:53:50 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"
#include "string.h"
#include "limits.h"

static size_t	ft_charstatus(int c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	if (c == '+' || c == '-')
		return (2);
	if (ft_isdigit(c))
		return (3);
	return (0);
}

static size_t	ft_add_dec(const char *str)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (ft_charstatus(str[i]) == 3)
	{
		count *= 10;
		count += str[i] - 48;
		i++;
	}
	return (count);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;

	i = 0;
	sign = 1;
	while (ft_charstatus(nptr[i]))
	{
		while (ft_charstatus(nptr[i]) > 1)
		{
			if (ft_charstatus(nptr[i]) == 2)
			{
				if (nptr[i] == '-')
					sign *= -1;
				i++;
			}
			return (sign * ft_add_dec(&nptr[i]));
		}
		i++;
	}
	return (0);
}

long long	ft_atol(const char *nptr)
{
	size_t	i;
	long long		sign;

	i = 0;
	sign = 1;
	while (ft_charstatus(nptr[i]))
	{
		while (ft_charstatus(nptr[i]) > 1)
		{
			if (ft_charstatus(nptr[i]) == 2)
			{
				if (nptr[i] == '-')
					sign *= -1;
				i++;
			}
			return (sign * ft_add_dec(&nptr[i]));
		}
		i++;
	}
	return (LONG_MAX);
}
