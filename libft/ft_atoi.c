/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:18:47 by atabit            #+#    #+#             */
/*   Updated: 2025/10/24 09:26:16 by atabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static long long	maxlong(int x)
{
	if (x == 1)
		return (9223372036854775807);
	return (9223372036854775807);
}

int	ft_atoi(const char *nptr)
{
	int			sign;
	long long	n;
	size_t		i;

	sign = 1;
	i = 0;
	n = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (sign == -1 && n > (maxlong(1) - (nptr[i] - '0')) / 10)
			return (0);
		if (sign == 1 && n > (maxlong(1) - (nptr[i] - '0')) / 10)
			return (-1);
		n = (n * 10) + (nptr[i] - '0');
		i++;
	}
	return ((int)(n * sign));
}
