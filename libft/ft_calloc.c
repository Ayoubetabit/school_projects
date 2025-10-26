/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:42:58 by atabit            #+#    #+#             */
/*   Updated: 2025/10/24 09:32:27 by atabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*arr;
	size_t	i;

	i = 0;
	if (size != 0 && nmemb > SIZE_MAX / size)
        return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	while (i < (nmemb * size))
	{
		arr[i] = 0;
		i++;
	}
	return ((void *)arr);
}
