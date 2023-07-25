/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdemiray <rdemiray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:19:59 by rdemiray          #+#    #+#             */
/*   Updated: 2023/07/14 09:49:14 by rdemiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(const char *s, char c)
{
	size_t	num;

	num = 0;
	while (*s)
	{
		if (*s != c)
		{
			++num;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (num);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s == c)
		{
			s++;
			continue ;
		}
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		ret[i++] = ft_substr(s, 0, len);
		s += len;
	}
	ret[i] = 0;
	return (ret);
}
