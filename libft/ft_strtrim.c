/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:47:07 by atabit            #+#    #+#             */
/*   Updated: 2025/10/21 10:32:32 by atabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	exist(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	sl;
	char	*string;

	i = 0;
	start = 0;
	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	sl = ft_strlen(s1);
	string = (char *)malloc((sl + 1) * sizeof(char));
	if (!string)
		return (NULL);
	while (exist(set, s1[start]))
		start++;
	while (exist(set, s1[sl - 1]))
		sl--;
	while (s1[start] && start < sl)
		string[i++] = s1[start++];
	string[i] = '\0';
	return (string);
}
