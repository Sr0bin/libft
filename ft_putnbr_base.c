/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:51:46 by rorollin          #+#    #+#             */
/*   Updated: 2025/01/13 19:33:07 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <unistd.h>

// char	*ft_nbr_base(long long int n, char *base)
// {
// 	int	size_base;
// 	char	*output;
//
// 	size_base = ft_strlen(base);
// 	if (!ft_valid_base(base))
// 		return (NULL);
// 	output = ft_calloc(1,(sizeof(char)));
// 	if (n < 0)
// 		output = ft_strjoin
//
// }
//
//

void	ft_putnbr_base(long long int n, char *base)
{
	int	size_base;

	size_base = ft_strlen(base);
	if (!ft_valid_base(base))
		return ;
	if (n == LLONG_MIN)
	{
		ft_putnbr_base((n - 1) / size_base, base);
		n = (n - 1) % size_base;
		write(1, &base[n + 1], 1);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n *= -1;
	}
	if (n >= 0 && n <= size_base - 1)
		write(1, &base[n], 1);
	else
	{
		ft_putnbr_base(n / size_base, base);
		n = (n % size_base);
		write(1, &base[n], 1);
	}
}
