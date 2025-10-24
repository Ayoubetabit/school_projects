/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 09:27:46 by atabit            #+#    #+#             */
/*   Updated: 2025/10/19 10:46:22 by atabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strcat(char *src, char const *str)
{
	size_t	srcl;
	size_t	i;

	i = 0;
	srcl = ft_strlen(src);
	while (str[i])
	{
		src[srcl + i] = str[i];
		i++;
	}
	src[srcl + i] = '\0';
	return (src);
}

static size_t	totallen(char const *str1, char const *str2)
{
	size_t	a;
	size_t	b;

	a = ft_strlen(str1);
	b = ft_strlen(str2);
	return (a + b);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*string;

	len = totallen(s1, s2);
	string = (char *)malloc((len + 1) * sizeof(char));
	if (!string)
		return (NULL);
	string[0] = '\0';
	ft_strcat(string, s1);
	ft_strcat(string, s2);
	return (string);
}
