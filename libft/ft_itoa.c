/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:46:28 by atabit            #+#    #+#             */
/*   Updated: 2025/10/22 12:18:29 by atabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	nbrlen(int n)
{
	int	l;
	int	x;

	x = n;
	if (n < 0)
		x = -x;
	l = 1;
	while (x > 9)
	{
		x = x / 10;
		l++;
	}
	return (l);
}

static char	*fill_str(char *str, int l, int n)
{
	int	x;
	int	i;
	int	s;

	i = l - 1;
	x = n;
	s = 0;
	if (n < 0)
	{
		x = -x;
		s++;
		str[0] = '-';
	}
	while (i > s)
	{
		str[i] = (x % 10) + '0';
		x = x / 10;
		i--;
	}
	str[s] = (x + '0');
	str[l] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		l;
	char	*str;

	l = nbrlen(n);
	if (n < 0)
		l++;
	str = (char *)malloc((l + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (fill_str(str, l, n));
}
