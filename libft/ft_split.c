/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:38:18 by atabit            #+#    #+#             */
/*   Updated: 2025/10/21 21:45:16 by atabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_countword(const char *str, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
		{
			n++;
		}
		i++;
	}
	return (n);
}

static char	*ft_word(char const *start, char end, size_t *x)
{
	size_t	l;
	size_t	i;
	char	*word;

	i = 0;
	l = 0;
	while (start[l] && start[l] != end)
		l++;
	word = (char *)malloc((l + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start[i] == end)
		i++;
	while (start[i] && start[i] != end)
	{
		word[i] = start[i];
		i++;
	}
	(*x) += i + 1;
	word[i] = '\0';
	return (word);
}

static void	free_all(char **array, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(array[j]);
		j++;
	}
	free(array);
}

static char	**fill_array(char const *str, char c, char **arr, size_t arrl)
{
	size_t	x;
	size_t	i;

	i = 0;
	x = 0;
	while (i < arrl)
	{
		while (str[x] && str[x] == c)
			x++;
		arr[i] = ft_word(str + x, c, &x);
		if (!arr[i])
		{
			free_all(arr, i);
			return (NULL);
		}
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	n;

	if (!s)
		return (NULL);
	n = ft_countword(s, c);
	array = (char **)malloc((n + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	return (fill_array(s, c, array, n));
}
