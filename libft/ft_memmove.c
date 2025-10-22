/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:59:17 by atabit            #+#    #+#             */
/*   Updated: 2025/10/17 20:54:14 by atabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pdest;
	unsigned char	*psrc;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pdest;
	unsigned char	*psrc;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	i = n;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (pdest < psrc)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (i > 0)
		{
			i--;
			pdest[i] = psrc[i];
		}
	}
	return (dest);
}
