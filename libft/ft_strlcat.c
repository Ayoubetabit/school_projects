/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:57:05 by atabit            #+#    #+#             */
/*   Updated: 2025/10/17 21:25:13 by atabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	size_t	ft_strlen(char *src)
{
	size_t	l;

	l = 0;
	while (src[l])
	{
		l++;
	}
	return (l);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstl;
	size_t	srcl;
	size_t	i;

	i = 0;
	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (dstl >= size)
		return (srcl + size);
	while (src[i] && (size + 1 > dstl + i))
	{
		dst[dstl + i] = src[i];
		i++;
	}
	dst[dstl + i] = '\0';
	return (dstl + srcl);
}
