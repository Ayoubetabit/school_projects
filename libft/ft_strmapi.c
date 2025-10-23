/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:52:43 by atabit            #+#    #+#             */
/*   Updated: 2025/10/22 21:25:26 by atabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	sl;
	size_t	i;
	char	*str;

	i = 0;
	sl = ft_strlen(s);
	str = (char *)malloc((sl + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char to_upper(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int	main()
{
	char	*ptr;

	ptr = ft_strmapi("hello im ayoub", to_upper);
	printf("--> %s\n", ptr);
	return (0);
}
